/*
============================================================================

      DESCRIPTION:
         This utility provides overloaded functions to format numerical 
         values into highly readable strings. It automatically inserts comma 
         separators for thousands and handles both integer and floating-point 
         numbers, including proper management of signs and decimal places.

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

#include "Format.h"
#include <string>

std::string formatNumber(long long number) {
    std::string valueNumber = std::to_string(number); // convert number
    std::string valueSign = ""; // final sign

    // handle negative sign
    if (valueNumber[0] == '-') {
        valueSign = "-"; // set negative
        valueNumber.erase(0, 1); // delete minus
    }

    std::string valueResult = ""; // final string
    int valueCount = 0; // digit counter

    // loop backwards to insert commas
    for (int i = valueNumber.size() - 1; i >= 0; --i) {
         valueResult = valueNumber[i] + valueResult; // add digit
         valueCount++; // increase count
         
         if (valueCount == 3 && i != 0) {
             valueResult = "," + valueResult; // add comma
             valueCount = 0; // reset counter
         }
    }

    return valueSign + valueResult; // return formatted
}

std::string formatNumber(double number) {
    if (number >= 0) number = number + 0.005; // round up positive
    else number = number - 0.005; // round down negative

    std::string valueNumber = std::to_string(number); // convert number
    std::string valueSign = ""; // final sign
    std::string valueFraction = ""; // fraction part

    // handle negative sign
    if (valueNumber[0] == '-') {
        valueSign = "-"; // set negative
        valueNumber.erase(0, 1); // delete minus
    }

    size_t valuePosition = valueNumber.find('.'); // find dot
    if (valuePosition != std::string::npos) {
        valueFraction = valueNumber.substr(valuePosition, 3); // get 2 decimals
        valueNumber = valueNumber.substr(0, valuePosition); // get whole
        
        // clean up trailing zeros
        if (valueFraction == ".00") valueFraction = ""; // remove zeros
        // delete last zero
        else if (valueFraction[2] == '0') valueFraction = valueFraction.substr(0, 2); 
    }

    std::string valueResult = ""; // final string
    int valueCount = 0; // digit counter

    // loop backwards to insert commas
    for (int i = valueNumber.size() - 1; i >= 0; --i) {
         valueResult = valueNumber[i] + valueResult; // add digit
         valueCount++; // increase count

         if (valueCount == 3 && i != 0) {
             valueResult = "," + valueResult; // add comma
             valueCount = 0; // reset counter
         }
    }

    return valueSign + valueResult + valueFraction; // return formatted
}