#ifndef LAB1CCP_KEEPER_H
#define LAB1CCP_KEEPER_H

#include "Vehicle.h"
#include <fstream>

class Keeper {
private:
    Vehicle** vehicles;
    int counter;

public:
    Keeper();
    ~Keeper();

    void add(Vehicle* vehicle);
    void remove(int index);
    void show() const;
    void save(const string& filename);
    void load(const string& filename);
    void rename(int index);
    void clear();
};


#endif //LAB1CCP_KEEPER_H