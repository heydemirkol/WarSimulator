/*
============================================================================

      DESCRIPTION:
         This utility provides a function to pause the console to 
         prevent bugs and stop the window from closing instantly. 
         It safely flushes residual input and waits for the ENTER key.

      C++ STANDARD:
         Any (Standard C++)

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Terminal and console environments

      LAST MODIFIED:
         June 11, 2026

============================================================================
*/

#include "Pause.h"
#include <limits>
#include <iostream>

void pauseConsole() { 
    // display the prompt message to the user
    std::cout << "\nPress ENTER to continue..."; 
    std::cin.clear();

    // safely clear the input buffer only if there is residual data left
    if (std::cin.peek() != '\n' && std::cin.peek() != EOF) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    // capture the ENTER key press
    std::cin.get();
}