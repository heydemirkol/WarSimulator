#include "Menus.h"
#include "Color.h"
#include "Effect.h"
#include "Format.h"
#include <iostream>
#include <string>

static std::string header(const std::string& text) {
    setConsoleColor("1;31");
    return "================ " + text + " ================\n";
}

void showStats(const Game& game) {
    printEffectText(header("STATS"));
    setConsoleColor(36);

    std::cout << "Commander: " 
              << game.commander.getCommanderName() << "\n";

    std::cout << "Budget: $" 
              << formatNumber(game.commander.getBudget()) << "\n";

    std::cout << "Rebirths: " 
              << formatNumber(game.rebirth.getRebirths()) << "\n";

    std::cout << "Rebirth Multiplier: " 
              << formatNumber(game.multiplier.getRebirthMulti()) << "x\n";

    std::cout << "Income Multiplier: " 
              << formatNumber(game.multiplier.getIncomeMulti()) << "x\n";

    std::cout << "Soldiers: "
              << formatNumber(game.army.getSoldiers()) << "\n";

    std::cout << "Tanks: "
              << formatNumber(game.army.getTanks()) << "\n";

    std::cout << "Jets: "
              << formatNumber(game.army.getJets()) << "\n";

    std::cout << "Ships: "
              << formatNumber(game.army.getShips()) << "\n";

    setConsoleColor(0);
}

void showMainMenu() {
    printEffectText(header("MAIN MENU"));
    setConsoleColor(36);

    std::cout << "[1] - War\n";
    std::cout << "[2] - Army Buy or Sell\n";
    std::cout << "[3] - Rebirth\n";
    std::cout << "[4] - Exit\n";
    
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

    std::cout << "==============================================\n\n";
}