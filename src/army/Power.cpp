#include "Power.h"

int getLandForce(Army& army) {
    double soldierForce = army.getSoldiers() * 0.008;
    double tankForce = army.getTanks() * 0.032;

    double landForce = soldierForce + tankForce;

    return landForce;
}

int getAirForce(Army& army) {
    double airForce = army.getJets() * 0.099;

    return airForce;
}

int getNavyForce(Army& army) {
    double navyForce = army.getShips() * 0.399;
}