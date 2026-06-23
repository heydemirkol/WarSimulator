#ifndef ARMY_H
#define ARMY_H

class Army {
private:
    int soldier_;
    int tank_;
    int jet_;
    int radar_;
    int ship_;
    
public:
    Army();

    int getSoldiers() const;
    int getTanks() const;
    int getJets() const;
    int getRadars() const;
    int getShips() const;

    void addSoldier(int amount);
    void addTank(int amount);
    void addJet(int amount);
    void addRadar(int amount);
    void addShip(int amount);

    void removeSoldier(int amount);
    void removeTank(int amount);
    void removeJet(int amount);
    void removeRadar(int amount);
    void removeShip(int amount);

    void resetAllUnits();
};

#endif