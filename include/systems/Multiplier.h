#ifndef MULTIPLIER_H
#define MULTIPLIER_H

class Multiplier {
private:
    int incomeMulti_;
    int rebirthMulti_;

public:
    Multiplier();

    int getIncomeMulti() const;
    int getRebirthMulti() const;

    void addIncomeMulti(int amount);
    void addRebirthMulti(int amount); 
};

#endif