/*
SyncWait.cpp - A library to synchronize the start of serial output with a program on a computer.
Author: Derek Chafin
Version: 1.0
Modified: December 19, 2011
License
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/.
*/

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