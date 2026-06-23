/*
============================================================================

      DESCRIPTION:
         This utility contains a helper function to pause the current 
         thread's execution for a specified duration.

      C++ STANDARD:
         C++11 or higher 

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Any (Core logic with no environment dependencies)

      LAST MODIFIED:
         June 10, 2026

============================================================================
*/

#include "Delay.h"
#include <thread>
#include <chrono>

// blocks execution for the specified number of seconds
void makeDelay(int second) {
    std::this_thread::sleep_for(std::chrono::seconds(second)); 
}