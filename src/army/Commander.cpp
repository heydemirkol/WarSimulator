/*
============================================================================

      DESCRIPTION:
         This file contains methods for the commander, such as getting their name.
         It includes managing their budget. This involves adding and reducing it.

      LAST MODIFIED:
         June 25, 2026

============================================================================
*/

#include "Commander.h"
#include "Clamp.h"

Commander::Commander() 
    : budget_(0) 
{}

std::string Commander::getCommanderName() const {
    return name_;
}

long long Commander::getBudget() const {
    return budget_;
}

void Commander::setCommanderName(const std::string& name) {
    name_ = name;
}

void Commander::addBudget(long long amount) { // if greater than 0, add budget
    if (amount > 0) budget_ += amount;
}

// if amount is valid and less than or equal to budget amount, spend budget
void Commander::spendBudget(long long amount) { 
    if (amount > 0 && amount <= budget_)
        budget_ -= amount;
    
    // utility function that sets value to 0 if it is less than 0  
    clampAmount(budget_);
}

void Commander::resetAllBudget() {
    budget_ = 0;
}
