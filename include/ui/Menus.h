#ifndef MENUS_H
#define MENUS_H

#include "Army.h"
#include "Commander.h"
#include "Multiplier.h"
#include "Rebirth.h"

void showStats(const Army& Army,
               const Commander& Commander,
               const Multiplier& multiplier,
               const Rebirth& rebirth);

void showMainMenu();
void showArmyMenu(const Army& army);

#endif