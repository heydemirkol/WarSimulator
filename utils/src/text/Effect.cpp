/*
============================================================================

      DESCRIPTION:
         This utility contains a helper function to print text character by 
         character with a dynamic typewriter effect. It flushes the output 
         buffer immediately to display each letter instantly with a 
         predefined delay.

      C++ STANDARD:
         C++11 or higher

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Terminal and console environments

      LAST MODIFIED:
         June 25, 2026

============================================================================
*/

#include "Effect.h"
#include <iostream>
#include <thread>
#include <chrono>

// prints text character by character with a typewriter effect
void printEffectText(const std::string& text) {
    for (char c : text) {
         std::cout << c << std::flush; // clear buffer
         std::this_thread::sleep_for(std::chrono::milliseconds(90)); 
    } 
}