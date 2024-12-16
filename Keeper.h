#ifndef KEEPER_H
#define KEEPER_H
#include "Vehicle.h"
#include <vector>
#include <fstream>
class Keeper {
private:
    std::vector<Vehicle*> vehicles; // Using a vector to manage dynamic memory
public:
    ~Keeper();
    void addVehicle(Vehicle* vehicle);
    void removeVehicle(int index);
    void displayVehicles() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};
#endif // KEEPER_H