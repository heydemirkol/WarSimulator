/*
============================================================================

      DESCRIPTION:
         This file is used to collectively measure the strength of units during battle.

      LAST MODIFIED:
         June 25, 2026

============================================================================
*/

#include "Power.h"

int getLandForce(Army& army) {
    double soldierForce = army.getSoldiers() * 0.012;
    double tankForce = army.getTanks() * 0.050;

    double landForce = soldierForce + tankForce;

    return landForce;
}

int getAirForce(Army& army) {
    double airForce = army.getJets() * 0.138;

    return airForce;
}

int getNavyForce(Army& army) {
    double navyForce = army.getShips() * 0.399;
    
    return navyForce;
}