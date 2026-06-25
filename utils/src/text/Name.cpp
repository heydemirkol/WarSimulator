/*
============================================================================

      DESCRIPTION:
         This utility provides a function that returns a random
         first name from a predefined static list.

      C++ STANDARD:
         C++11 or higher

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Any (Core logic with no environment dependencies)

      LAST MODIFIED:
         June 13, 2026

============================================================================
*/

#include "Name.h"
#include <cstdlib>
#include <ctime>

static const char* names[] = {
    "James", "John", "Robert", "Michael", "William",
    "David", "Richard", "Joseph", "Thomas", "Charles",
    "Mary", "Patricia", "Jennifer", "Linda", "Elizabeth",
    "Susan", "Jessica", "Sarah", "Karen", "Emily",
    "Ava", "Olivia", "Mia", "Liam", "Noah",
    "Ethan", "Lucas", "Mason", "Logan", "Leo",
    "Owen", "Emma", "Scarlett", "Isabella",
    "Lily", "Isaac", "Daniel", "Alexander"
};

std::string generateName() {
    static int isInitialized = 0;

    if (isInitialized == 0) {
        // get current system time and cast it to unsigned int for the seed
        srand(static_cast<unsigned int>(time(nullptr)));

        // set flag to 1 so the seed is never re-initialized in future calls
        isInitialized = 1;
    }
    
    int count = 38; // total number of names in array

    int index = rand() % count; // pick random index

    return std::string(names[index]); // return selected name as std::string
}