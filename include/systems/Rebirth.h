#ifndef REBIRTH_H
#define REBIRTH_H

class Rebirth {
private:
    int rebirth_;

public:
    Rebirth();
    
    int getRebirths() const;
    
    void addRebirth(int amount);
};

#endif