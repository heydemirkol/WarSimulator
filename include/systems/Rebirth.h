#ifndef REBIRTH_H
#define REBIRTH_H

class Rebirth {
private:
    int rebirth_ = 0;

public:
    int getRebirths() const;
    
    void addRebirth(int amount);
};

#endif