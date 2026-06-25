#ifndef MULTIPLIER_H
#define MULTIPLIER_H

class Multiplier {
private:
    int incomeMulti_;

public:
    Multiplier();

    int getIncomeMulti() const;

    void addIncomeMulti(int amount);
};

#endif