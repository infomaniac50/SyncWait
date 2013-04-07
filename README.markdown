SyncWait - A library to synchronize the start of serial output with a program on a computer.
Created by Derek Chafin
December 6, 2011
Released into public domain

This library gives the arduino the capability to wait for a certain input in the form of a byte array to synchronize the start of serial output with a computer it is connected to. The function doSyncWait is blocks further execution until the correct input is received. The function doFinish only checks the input once and returns a boolean value indicating if a match has been found