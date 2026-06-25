/*
============================================================================

      DESCRIPTION:
         This file is the income multiplier system of the game.
         It stores and manages the player’s income multiplier value.
         
      LAST MODIFIED:
         June 25, 2026

============================================================================
*/

#include "Multiplier.h"

Multiplier::Multiplier() // starting value ​​of the multiplier
          : incomeMulti_(1)
{}

int Multiplier::getIncomeMulti() const { 
    return incomeMulti_; // return the amount of income multiplier
}

void Multiplier::addIncomeMulti(int amount) { 
    // If the amount is greater than 0, add the multiplier
    if (amount > 0) incomeMulti_ += amount; 
}