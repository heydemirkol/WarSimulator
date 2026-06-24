#include "Multiplier.h"

Multiplier::Multiplier() // starting values ​​of multipliers
          : incomeMulti_(1),
            rebirthMulti_(1)
{}

int Multiplier::getIncomeMulti() const { 
    return incomeMulti_; // return the amount of income multiplier
}

int Multiplier::getRebirthMulti() const {
    return rebirthMulti_;
}

void Multiplier::addRebirthMulti(int amount) { // if greater than 0, add multiplier
    if (amount > 0) rebirthMulti_ += amount;
}

void Multiplier::addIncomeMulti(int amount) {
    if (amount > 0) incomeMulti_ += amount;
}