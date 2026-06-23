#ifndef LEADER_H
#define LEADER_H

#include <string>

class Leader {
private:
    std::string name_;

    long long budget_;

public:
    Leader();

    std::string getLeaderName() const;
    long long getBudget() const;

    void setLeaderName(const std::string& name);

    void addBudget(long long amount);
    
    void spendBudget(long long amount);

    void resetAllBudget();
};

#endif