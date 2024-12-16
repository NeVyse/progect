#include "Keeper.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Bus.h"
Keeper::~Keeper() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
    vehicles.clear();
}
void Keeper::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}
void Keeper::removeVehicle(int index) {
    if (index < 0 || index >= vehicles.size()) {
        throw std::out_of_range("Index out of range.");
    }
    delete vehicles[index];
    vehicles.erase(vehicles.begin() + index);
}
void Keeper::displayVehicles() const {
    for (size_t i = 0; i < vehicles.size(); ++i) {
        std::cout << "Index " << i << ": ";
        vehicles[i]->output();
    }
}
void Keeper::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename, std::ios::binary);
    if (!outFile) {
        throw std::runtime_error("Could not open file for writing.");
    }
    for (const auto& vehicle : vehicles) {
        outFile << vehicle->getType() << std::endl;
        // Add serialization logic for each vehicle type
    }
    outFile.close();
}
void Keeper::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename, std::ios::binary);
    if (!inFile) {
        throw std::runtime_error("Could not open file for reading.");
    }
    std::string type;
    while (inFile >> type) {
        Vehicle* vehicle = nullptr;
        if (type == "Car") {
            vehicle = new Car();
        } else if (type == "Motorcycle") {
            vehicle = new Motorcycle();
        } else if (type == "Bus") {
            vehicle = new Bus();
        }
        if (vehicle) {
            vehicle->input(); // This will need to be replaced with actual deserialization
            addVehicle(vehicle);
        }
    }
    inFile.close();
}
