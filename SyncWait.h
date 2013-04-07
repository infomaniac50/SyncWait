/*
SyncWait.h - A library to synchronize the start of serial output with a program on a computer.
Author: Derek Chafin
Version: 1.0
Modified: December 19, 2011
License
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/.
*/

#ifndef SyncWait_h
#define SyncWait_h

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

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
