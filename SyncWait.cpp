/*
  SyncWait.cpp - Library to synchronize the start of serial output with a program on a computer.
  Created by Derek Chafin, December 6, 2011
  Released into the public domain.
*/

#include "Arduino.h"
#include "SyncWait.h"

void SyncWait::doSyncWait()
{
  while(!Serial.available())
  {
	delay(50);
  }
}

void SyncWait::doSyncWait(const byte* startBytes, int length)
{
  while(checkBytes(startBytes, length))
  {
    delay(50);
  }
}

boolean SyncWait::doFinish(const byte* endBytes, int length)
{
  return checkBytes(endBytes, length);
}

boolean SyncWait::checkBytes(const byte* bytes, int length)
{
  boolean keepgoing = true;

  if (Serial.available() >= length)
  {      
    for (int i=0; i < length; i++)
    {
      int data = Serial.read();
      if (data == bytes[i])
      {
        keepgoing = false;
      }
      else
      {
        keepgoing = true;
        break;
      }
    }
  }
  
  return keepgoing;
}