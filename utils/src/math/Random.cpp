/*
============================================================================

      DESCRIPTION:
         This utility module provides a function to generate and return a 
         random number between 0 and 100 (inclusive). 

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

#include "Random.h"
#include <cstdlib> 
#include <ctime>   

int randomNumber() {
    static int isInitialized = 0; 
    
    if (isInitialized == 0) {
        // get current system time and cast it to unsigned int for the seed
        srand(static_cast<unsigned int>(time(nullptr)));

        // set flag to 1 so the seed is never re-initialized in future calls
        isInitialized = 1;
    }
    
    // returns a value in the range [0, 100] 
    return rand() % 101;
}