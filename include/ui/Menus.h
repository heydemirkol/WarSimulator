#ifndef MENUS_H
#define MENUS_H

#include "Army.h"
#include "Commander.h"
#include "Multiplier.h"
#include "Rebirth.h"

class Game {
public:
    const Army& army;
    const Commander& commander;
    const Multiplier& multiplier;
    const Rebirth& rebirth;
};

void showStats(const Game& game);
void showMainMenu();
void showArmyMenu(const Army& army);

#endif