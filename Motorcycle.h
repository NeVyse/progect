#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicle.h"
class Motorcycle : public Vehicle {
private:
    std::string brand;
    std::string model;
    double engineVolume;
    double power;
    std::string terrainType;
public:
    Motorcycle();
    Motorcycle(const Motorcycle& other);
    ~Motorcycle();
    void input() override;
    void output() const override;
    std::string getType() const override;
};
#endif // MOTORCYCLE_H