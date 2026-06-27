/*
============================================================================

      DESCRIPTION:
         This utility pauses the console to prevent the window from closing immediately  
         and ensures stable input handling by clearing leftover input and waiting for ENTER key.

      C++ STANDARD:
         Any (Standard C++)

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Terminal and console environments

      LAST MODIFIED:
         June 27, 2026

============================================================================
*/

#include "Pause.h"
#include <limits>
#include <iostream>

void pauseConsole() { 
   std::cout << "\nPress ENTER to continue.. " << std::flush;

    // clear any leftover input
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // wait for user to press ENTER
    std::cin.get();
}