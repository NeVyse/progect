#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"
class Bus : public Vehicle {
private:
    std::string brand;
    std::string model;
    int seatingCapacity;
    int totalCapacity;
    std::string finalDestination;
public:
    Bus();
    Bus(const Bus& other);
    ~Bus();
    void input() override;
    void output() const override;
    std::string getType() const override;
};
#endif // BUS_H
