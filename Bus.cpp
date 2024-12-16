#include "Bus.h"
#include <iostream>
#include <limits> // Для std::numeric_limits
Bus::Bus() {
    std::cout << "Constructor of Bus called." << std::endl;
}
Bus::Bus(const Bus& other) : brand(other.brand), model(other.model), 
                             seatingCapacity(other.seatingCapacity), 
                             totalCapacity(other.totalCapacity), 
                             finalDestination(other.finalDestination) {
    std::cout << "Copy constructor of Bus called." << std::endl;
}
Bus::~Bus() {
    std::cout << "Destructor of Bus called." << std::endl;
}
void Bus::input() {
    std::cout << "Enter brand: ";
    std::cin >> brand;
    std::cout << "Enter model: ";
    std::cin >> model;
    // Проверка ввода для seatingCapacity
    while (true) {
        std::cout << "Enter seating capacity: ";
        if (std::cin >> seatingCapacity) {
            break; // Ввод корректен, выходим из цикла
        } else {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            std::cin.clear(); // Сбрасываем флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода
        }
    }
    // Проверка ввода для totalCapacity
    while (true) {
        std::cout << "Enter total capacity: ";
        if (std::cin >> totalCapacity) {
            break; // Ввод корректен, выходим из цикла
        } else {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            std::cin.clear(); // Сбрасываем флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода
        }
    }
    std::cout << "Enter final destination: ";
    std::cin >> finalDestination;
}
void Bus::output() const {
    std::cout << "Bus: " << brand << " " << model << ", Seating Capacity: " 
              << seatingCapacity << ", Total Capacity: " << totalCapacity 
              << ", Destination: " << finalDestination << std::endl;
}
std::string Bus::getType() const {
    return "Bus";
}