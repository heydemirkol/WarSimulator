#include "Menus.h"
#include "Color.h"
#include "Effect.h"
#include "Format.h"
#include <iostream>
#include <string>

static std::string header(const std::string& text) { // static header
    setConsoleColor("1;31"); // sets bold style and red color
    return "================ " + text + " ================\n"; // align
}

void showStats(const Army& army,
               const Commander& commander,
               const Multiplier& multiplier,
               const Rebirth& rebirth) {

    printEffectText(header("STATS")); // stats header
    setConsoleColor(36); // sets cyan color

    std::cout << "Commander: " 
              << commander.getCommanderName() << "\n";

    std::cout << "Budget: $" 
              << formatNumber(commander.getBudget()) << "\n";

    std::cout << "Rebirths: " 
              << formatNumber(rebirth.getRebirths()) << "\n";

    std::cout << "Income Multiplier: " 
              << formatNumber(multiplier.getIncomeMulti()) << "x\n";

    std::cout << "Soldiers: "
              << formatNumber(army.getSoldiers()) << "\n";

    std::cout << "Tanks: "
              << formatNumber(army.getTanks()) << "\n";

    std::cout << "Jets: "
              << formatNumber(army.getJets()) << "\n";

    std::cout << "Ships: "
              << formatNumber(army.getShips()) << "\n";

    setConsoleColor(0); // reset color
}

void showMainMenu() {
    printEffectText(header("MAIN MENU")); 
    setConsoleColor(36); 

    std::cout << "[1] - War\n";
    std::cout << "[2] - Army Buy or Sell\n";
    std::cout << "[3] - Rebirth\n";
    std::cout << "[0] - Exit\n";
    std::cout << "Choose: ";
    
    std::cout << "==============================================\n\n"; 

    setConsoleColor(0); 
}

void showArmyMenu(const Army& army) {
    printEffectText(header("UNITS"));
    setConsoleColor(36);

    std::cout << "[1] - Buy Soldier ($5 per unit)\n";
    std::cout << "[2] - Buy Tank ($5 per unit)\n";
    std::cout << "[3] - Buy Jet ($5 per unit)\n";
    std::cout << "[4] - Buy Ship ($5 per unit)\n";

    printEffectText(header("SELL"));

    std::cout << "[5] - Sell Soldier ($5 per unit)\n";
    std::cout << "[6] - Sell Tank ($5 per unit)\n";
    std::cout << "[7] - Sell Jet ($5 per unit)\n";
    std::cout << "[8] - Sell Ship ($5 per unit)\n";
    std::cout << "[0] - Cancel\n";
    std::cout << "Choose: ";
    
    setConsoleColor(0); 

    std::cout << "==============================================\n\n";
}