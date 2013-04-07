##Arduino SyncWait Library

###Author
Derek Chafin  
Version: 1.0  
Modified: December 19, 2011  
Website: [http://coding-squared.com/blog/][blog]  

###Description
A library to synchronize the start of serial output with a program on a computer.
This library eases the burden of making the Arduino wait for a certain input in the form of a byte array to synchronize the start of serial output with a computer to which it is connected.
The function doSyncWait blocks further execution until the correct input is received.
The function doFinish only checks the input once and returns a boolean value indicating if a match has been found.

###License
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.  
To view a copy of this license, visit [http://creativecommons.org/licenses/by-sa/3.0/](http://creativecommons.org/licenses/by-sa/3.0/).  

[blog]: http://www.coding-squared.com/blog/ "Coding Squared"