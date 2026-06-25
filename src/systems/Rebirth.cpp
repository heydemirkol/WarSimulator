#include "Rebirth.h"

Rebirth::Rebirth()
       : rebirth_(0)
{}

int Rebirth::getRebirths() const { // return the number of rebirths
    return rebirth_;
}

void Rebirth::addRebirth(int amount) { // if greater than 0, add rebirth
    if (amount > 0) rebirth_ += amount;
}