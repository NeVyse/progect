#include "Car.h"
#include <iostream>
Car::Car() {
    std::cout << "Constructor of Car called." << std::endl;
}
Car::Car(const Car& other) : brand(other.brand), model(other.model), 
                             engineVolume(other.engineVolume), color(other.color), 
                             transmissionType(other.transmissionType) {
    std::cout << "Copy constructor of Car called." << std::endl;
}
Car::~Car() {
    std::cout << "Destructor of Car called." << std::endl;
}
void Car::input() {
    std::cout << "Enter brand: ";
    std::cin >> brand;
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter engine volume: ";
    std::cin >> engineVolume;
    std::cout << "Enter color: ";
    std::cin >> color;
    std::cout << "Enter transmission type: ";
    std::cin >> transmissionType;
}
void Car::output() const {
    std::cout << "Car: " << brand << " " << model << ", Engine Volume: " << engineVolume 
              << ", Color: " << color << ", Transmission: " << transmissionType << std::endl;
}
std::string Car::getType() const {
    return "Car";
}
