#include "Motorcycle.h"
using namespace std;
void Motorcycle::save(ofstream& file) {
    file << getName() << "\n";
    file << getBrand() << "\n";
    file << getModel() << "\n";
    file << getEngine() << "\n";
    file << getPower() << "\n";
    file << getTerrain() << "\n";
}

void Motorcycle::load(ifstream& file) {
    getline(file, fullName);
    getline(file, brand);
    setBrand(brand);
    getline(file, model);
    setModel(model);
    getline(file, engine);
    setEngine(engine);
    getline(file, power);
    setPower(power);
    getline(file, terrain);
    setTerrain(terrain);
}

void Motorcycle::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change brand\n";
        cout << "3. Change model\n";
        cout << "4. Change engine\n";
        cout << "5. Change power\n";
        cout << "6. Change terrain\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            show();
            break;
        case 2: {
            cout << "Enter brand: ";
            cin.ignore();
            getline(cin, brand);
            setBrand(brand);
            break;
        }
        case 3: {
            cout << "Enter model: ";
            cin.ignore();
            getline(cin, model);
            setModel(model);
            break;
        }
        case 4: {
            cout << "Enter engine: ";
            cin.ignore();
            getline(cin, engine);
            setEngine(engine);
            break;
        }
        case 5: {
            cout << "Enter power: ";
            cin.ignore();
            getline(cin, power);
            setPower(power);
            break;
        }
        case 6: {
            cout << "Enter terrain: ";
            cin.ignore();
            getline(cin, terrain);
            setTerrain(terrain);
            break;
        }
        }
    } while (choice != 0);
}

void Motorcycle::show() const {
    cout << "Motorcycle\n";
    cout << "Brand: " << getBrand() << "\n";
    cout << "Model: " << getModel() << "\n";
    cout << "Engine: " << getEngine() << "\n";
    cout << "Power: " << getPower() << "\n";
    cout << "Terrain: " << getTerrain() << "\n";
}