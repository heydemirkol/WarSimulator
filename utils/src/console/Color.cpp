/*
============================================================================

      DESCRIPTION:
         This utility provides overloaded functions to 
         dynamically modify console text color and style.
         It injects ANSI escape codes directly into the standard output stream.

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

#include "Color.h"
#include <iostream>

// sets the console text color using an integer ANSI code
void setConsoleColor(int color) { 
    std::cout << "\033[" << color << "m";
}

// sets the console text color/style using a string ANSI sequence
void setConsoleColor(const std::string& color) { 
    std::cout << "\033[" << color << "m";
}

// resets the console text color/style to default
void resetConsoleColor() { 
    std::cout << "\033[0m";
}