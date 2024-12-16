#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
class Car : public Vehicle {
private:
    std::string brand;
    std::string model;
    double engineVolume;
    std::string color;
    std::string transmissionType;
public:
    Car();
    Car(const Car& other);
    ~Car();
    void input() override;
    void output() const override;
    std::string getType() const override;
};
#endif // CAR_H