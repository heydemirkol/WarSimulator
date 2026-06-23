#include "Leader.h"
#include "Clamp.h"

Leader::Leader() 
    : budget_(0) // starting budget
{}

std::string Leader::getLeaderName() const {
    return name_;
}

long long Leader::getBudget() const {
    return budget_;
}

void Leader::setLeaderName(const std::string& name) {
    name_ = name;
}

void Leader::addBudget(long long amount) { // if greater than 0, add budget
    if (amount > 0) budget_ += amount;
}

// if amount is valid and less than or equal to budget amount, spend budget
void Leader::spendBudget(long long amount) { 
    if (amount > 0 && amount <= budget_)
        budget_ -= amount;
    
    // utility function that sets value to 0 if it is less than 0  
    clampAmount(budget_);
}

void Leader::resetAllBudget() {
    budget_ = 0;
}
