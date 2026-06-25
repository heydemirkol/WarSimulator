#include "Army.h"
#include "Clamp.h"

Army::Army() // starting values ​​of units
    : soldier_(0),
      tank_(0),
      jet_(0),
      ship_(0)
{}

int Army::getSoldiers() const { // return the number of soldiers
    return soldier_;
} 

int Army::getTanks() const {
    return tank_;
}

int Army::getJets() const {
    return jet_;
}

int Army::getShips() const {
    return ship_;
}

void Army::addSoldier(int amount) {
    if (amount > 0) soldier_ += amount; // if greater than 0, add soldiers
}

void Army::addTank(int amount) {
    if (amount > 0) tank_ += amount;
}

void Army::addJet(int amount) {
    if (amount > 0) jet_ += amount;
}

void Army::addShip(int amount) {
    if (amount > 0) ship_ += amount;
}

// if amount is valid and less than or equal to soldier count, remove soldiers
void Army::removeSoldier(int amount) {
    if (amount > 0 && amount <= soldier_)
        soldier_ -= amount;
    
    // utility function that sets value to 0 if it is less than 0    
    clampAmount(soldier_);    
}

void Army::removeTank(int amount) {
    if (amount > 0 && amount <= tank_)
        tank_ -= amount;

    clampAmount(tank_);    
}

void Army::removeJet(int amount) {
    if (amount > 0 && amount <= jet_) 
        jet_ -= amount;
    
    clampAmount(jet_);
}

void Army::removeShip(int amount) {
    if (amount > 0 && amount <= ship_) 
        ship_ -= amount;

    clampAmount(ship_);
}

void Army::resetAllUnits() { 
    soldier_ = 0;
    tank_ = 0;
    jet_ = 0;
    ship_ = 0;
}
