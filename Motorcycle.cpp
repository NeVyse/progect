#include "Motorcycle.h"
#include <iostream>
#include <limits>
Motorcycle::Motorcycle() {
    std::cout << "Constructor of Motorcycle called." << std::endl;
}
Motorcycle::Motorcycle(const Motorcycle& other) 
    : brand(other.brand), model(other.model), 
      engineVolume(other.engineVolume), 
      power(other.power), terrainType(other.terrainType) {
    std::cout << "Copy constructor of Motorcycle called." << std::endl;
}
Motorcycle::~Motorcycle() {
    std::cout << "Destructor of Motorcycle called." << std::endl;
}
void Motorcycle::input() {
    std::cout << "Enter brand: ";
    std::cin >> brand;
    std::cout << "Enter model: ";
    std::cin >> model;
    // Ввод engineVolume с проверкой
    std::cout << "Enter engine volume: ";
    while (!(std::cin >> engineVolume)) {
        std::cout << "Invalid input. Please enter a numeric value for engine volume: ";
        std::cin.clear(); // Очистить флаг ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорировать неправильный ввод
    }
    // Ввод power с проверкой
    std::cout << "Enter power: ";
    while (!(std::cin >> power)) {
        std::cout << "Invalid input. Please enter a numeric value for power: ";
        std::cin.clear(); // Очистить флаг ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорировать неправильный ввод
    }
    std::cout << "Enter terrain type: ";
    std::cin >> terrainType;
}
void Motorcycle::output() const {
    std::cout << "Motorcycle: " << brand << " " << model 
              << ", Engine Volume: " << engineVolume 
              << ", Power: " << power 
              << ", Terrain: " << terrainType << std::endl;
}
std::string Motorcycle::getType() const {
    return "Motorcycle";
}