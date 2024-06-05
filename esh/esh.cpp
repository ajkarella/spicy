#include <iostream>
#include <fstream>
#include <string>
 
//TODO: on start, open cache file, load it into string array, close cache
// https://www.tutorialspoint.com/how-to-read-a-text-file-with-cplusplus

//TODO: on exit, open cache file, save current string array, close cache
// https://stackoverflow.com/questions/9402254/how-do-you-run-a-function-on-exit-in-c

int main()
{
  // Initialize 2D array
    const char* colour[4];
    colour[0] = "hello";
    colour[1] = "world";
    colour[2] = "hello1";
    colour[3] = "world1";
 
  // Printing Strings stored in 2D array
  for (int i = 0; i < 4; i++)
      std::cout << colour[i] << "\n";
 
  return 0;
}