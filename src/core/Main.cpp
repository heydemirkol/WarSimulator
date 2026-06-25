#include "Army.h"
#include "Commander.h" 
#include "Power.h"
#include "Multiplier.h"
#include "Rebirth.h" 
#include "Menus.h"
#include "Clamp.h"
#include "Clear.h"
#include "Color.h"
#include "Pause.h"
#include "Delay.h"
#include "Effect.h"
#include "Format.h"
#include <string>
#include <iostream>

int main() {
    Army army;
    Commander commander;
    Multiplier multiplier;
    Rebirth rebirth;

    std::string name; // for nickname input
    std::string reply; // for yes/no input
    int choice; // for menu selection
    int amount; // for requirements that require a specific amount

    std::cout << "Welcome, enter a nickname: "; // entry
    std::getline(std::cin, name); // get nickname

    commander.setCommanderName(name); // set name

    std::cout << "I'll give you $90,000 as a gift for testing my game :)\n"; 

    commander.addBudget(90000);
    
     while (true) {
        clearConsole(); // clear the screen after each exit

        showStats(army, commander, multiplier, rebirth); // show stats at the top
        showMainMenu();

        std::cin >> choice; // get main menu input

         switch (choice) { // main
         case 0: 
            return 0; // exit game

         case 1: // main menu 1st option
            // check if the forces are strong enough
            if (getLandForce(army) >= 20 || getAirForce(army) >= 20 || getNavyForce(army) >= 10) {
                // reduce units after battle
                army.removeSoldier(8029);
                army.removeTank(993);
                army.removeJet(63);
                army.removeShip(5);
               
                // add budget based on the multiplier
                commander.addBudget(multiplier.getIncomeMulti() * 159999);
                
                std::cout << "\nWin!..";

                pauseConsole();
            }
            else { // insufficient power
                std::cout << "\nYour army is not strong enough..";
                std::cout << "\n(Example: tank, soldier = ground category)";
                std::cout << "\nYou can choose a unit category and only upgrade it before fighting, if you want.";

                pauseConsole();
            }
            break;

         case 2: { // main menu 2nd option
            showArmyMenu(army);

            std::cin >> choice; // get input

            switch (choice) {
            case 0: 
               break; // cancel option

            case 1: // buy soldier
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the budget is sufficient
               if (amount > 0 && commander.getBudget() >= amount) {
                   commander.spendBudget(amount);
                   army.addSoldier(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient budget...";

                   pauseConsole();
               }
               break;

            case 2: // buy tank
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the budget is sufficient
               if (amount > 0 && commander.getBudget() >= amount * 4) {
                   commander.spendBudget(amount * 4);
                   army.addTank(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient budget...";

                   pauseConsole();
               }
               break;

            case 3: // buy jet
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the budget is sufficient
               if (amount > 0 && commander.getBudget() >= amount * 70) {
                   commander.spendBudget(amount * 70);
                   army.addJet(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient budget...";

                   pauseConsole();
               }
               break;

            case 4: // buy ship 
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the budget is sufficient
               if (amount > 0 && commander.getBudget() >= amount * 1200) {
                   commander.spendBudget(amount * 1200);
                   army.addShip(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient budget...";

                   pauseConsole();
               }
               break;

            case 5: // sell soldier 
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the soldiers are sufficient
               if (amount > 0 && army.getSoldiers() >= amount) {
                   commander.addBudget(amount);
                   army.removeSoldier(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient...";

                   pauseConsole();
               }
               break;

            case 6: // sell tank
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the tanks are sufficient
               if (amount > 0 && army.getTanks() >= amount) {
                   commander.addBudget(amount * 2);
                   army.removeTank(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient...";

                   pauseConsole();
               }
               break;

            case 7: // sell jet
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the jets are sufficient
               if (amount > 0 && army.getJets() >= amount) {
                   commander.addBudget(amount * 35);
                   army.removeJet(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient...";

                   pauseConsole();
               }
               break;

            case 8: // sell ship
               std::cout << "Enter amount: ";
               std::cin >> amount; 

               // check if the ships are sufficient
               if (amount > 0 && army.getShips() >= amount) {
                   commander.addBudget(amount * 600);
                   army.removeShip(amount);

                   pauseConsole();
               }
               else { // Invalid or insufficient
                   std::cout << "\nInvalid selection or insufficient...";

                   pauseConsole();
               }
               break;

            
            default: 
               std::cout << "\nInvalid selection...";
               pauseConsole();

               break;
            } 
         } break;

         case 3:
            std::cout << "\nRebirth = $350,000"; // rebirth money
            // warning notice
            std::cout << "\nYour income multiplier will increase, but everything will be reset..";
            std::cout << "\nAre you sure? (yes/no): ";

            std::cin >> reply; // get input
             
             // check if the response is "yes" and if the budget is sufficient
             if (reply == "yes" && commander.getBudget() >= 350000) {
                 commander.resetAllBudget(); 
                 army.resetAllUnits();     
                 
                 // increase the multiplier
                 multiplier.addIncomeMulti(1);

                 pauseConsole();
             } 
             else { // Invalid or insufficient
                 std::cout << "\nInvalid selection or insufficient...";

                 pauseConsole();
             }
             break;

         default:
            std::cout << "\nInvalid selection...";

            pauseConsole();
            break;
        }
     }
}