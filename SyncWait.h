/*
  SyncWait.h - Library to synchronize the start of serial output with a program on a computer.
  Created by Derek Chafin, December 6, 2011
  Released into the public domain.
*/

#ifndef SyncWait_h
#define SyncWait_h

#include "Arduino.h"

class SyncWait
{
  public:
    void doSyncWait();
    void doSyncWait(const byte* startBytes, int length);
    boolean doFinish(const byte* endBytes, int length);
  private:
    boolean checkBytes(const byte* bytes, int length);
};
#endif
