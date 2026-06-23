/*
============================================================================

      DESCRIPTION:
         This utility provides a helper function to clear the console 
         screen across different platforms. It utilizes ANSI escape codes 
         instead of system calls for faster and more secure execution.
         The screen content is wiped and the cursor is reset to the top-left 
         home position.

      C++ STANDARD:
         Any (Standard C++)

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Terminal and console environments

      LAST MODIFIED:
         June 10, 2026

============================================================================
*/

#include "Clear.h"
#include <iostream>

// clears the console screen and resets the cursor position
void clearConsole() {
    #ifdef _WIN32 // Windows
        std::cout << "\033[2J\033[H";
    #else // Linux / macOS
        std::cout << "\033[2J\033[1;1H";
    #endif
}
