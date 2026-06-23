/*
============================================================================

      DESCRIPTION:
         This utility provides overloaded functions to safely clamp 
         numerical values.  

      C++ STANDARD:
         Any (Standard C++)

      TARGET OS:
         OS-Independent (Cross-Platform)

      TARGET ENVIRONMENT:
         Any (Core logic with no environment dependencies)

      LAST MODIFIED:
         June 10, 2026

============================================================================
*/

#include "Clamp.h"

void clampAmount(long long& amount) {
    // check if below zero
    if (amount < 0) amount = 0; // set to zero
}

void clampAmount(double& amount) {
    if (amount < 0.0) amount = 0.0;
}

void clampStat(int& value) {
    // check if below zero
    if (value < 0) value = 0; // set to zero
    // check if above hundred
    else if (value > 100) value = 100; // set to hundred
}

void clampStat(double& value) {
    // check if below zero
    if (value < 0.0) value = 0.0; // set to zero
    // check if above hundred
    else if (value > 100.0) value = 100.0; // set to hundred
}