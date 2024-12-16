#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
class Vehicle {
public:
    virtual ~Vehicle() {
        std::cout << "Destructor of Vehicle called." << std::endl;
    }
    virtual void input() = 0; // pure virtual function for input
    virtual void output() const = 0; // pure virtual function for output
    virtual std::string getType() const = 0; // to identify type of vehicle
};
#endif // VEHICLE_H
