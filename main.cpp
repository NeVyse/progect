#include <iostream>
#include "Keeper.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Bus.h"
void menu() {
    std::cout << "Menu:\n";
    std::cout << "1. Add Car\n";
    std::cout << "2. Add Motorcycle\n";
    std::cout << "3. Add Bus\n";
    std::cout << "4. Remove Vehicle\n";
    std::cout << "5. Display Vehicles\n";
    std::cout << "6. Save to File\n";
    std::cout << "7. Load from File\n";
    std::cout << "0. Exit\n";
}
int main() {
    Keeper keeper;
    int choice;
    do {
        menu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        try {
            switch (choice) {
                case 1: {
                    Car* car = new Car();
                    car->input();
                    keeper.addVehicle(car);
                    break;
                }
                case 2: {
                    Motorcycle* motorcycle = new Motorcycle();
                    motorcycle->input();
                    keeper.addVehicle(motorcycle);
                    break;
                }
                case 3: {
                    Bus* bus = new Bus();
                    bus->input();
                    keeper.addVehicle(bus);
                    break;
                }
                case 4: {
                    int index;
                    std::cout << "Enter index to remove: ";
                    std::cin >> index;
                    keeper.removeVehicle(index);
                    break;
                }
                case 5:
                    keeper.displayVehicles();
                    break;
                case 6: {
                    std::string filename;
                    std::cout << "Enter filename to save: ";
                    std::cin >> filename;
                    keeper.saveToFile(filename);
                    break;
                }
                case 7: {
                    std::string filename;
                    std::cout << "Enter filename to load: ";
                    std::cin >> filename;
                    keeper.loadFromFile(filename);
                    break;
                }
                case 0:
                    std::cout << "Exiting...\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    } while (choice != 0);
    return 0;
}
