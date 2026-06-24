#ifndef COMMANDER_H
#define COMMANDER_H

#include <string>

class Commander {
private:
    std::string name_;

    long long budget_;

public:
    Commander();

    std::string getCommanderName() const;
    long long getBudget() const;

    void setCommanderName(const std::string& name);

    void addBudget(long long amount);
    
    void spendBudget(long long amount);

    void resetAllBudget();
};

#endif