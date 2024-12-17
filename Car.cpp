#include "Car.h"
using namespace std;
void Car::save(ofstream& file) {
    file << getBrand() << "\n";
    file << getModel() << "\n";
    file << getEngine() << "\n";
    file << getColor() << "\n";
    file << getTrans() << "\n";
}

void Car::load(ifstream& file) {
    getline(file, fullName);
    getline(file, brand);
    setBrand(brand);
    getline(file, model);
    setModel(model);
    getline(file, engine);
    setEngine(engine);
    getline(file, color);
    setColor(color);
    getline(file, transmission);
    setTrans(transmission);
}

void Car::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change brand\n";
        cout << "3. Change model\n";
        cout << "4. Change engine\n";
        cout << "5. Change color\n";
        cout << "6. Change transmission\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            show();
            break;
        case 2: {
            cout << "Enter new brand: ";
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
            cout << "Enter color: ";
            cin.ignore();
            getline(cin, color);
            setColor(color);
            break;
        }
        case 6: {
            cout << "Enter transmission: ";
            cin.ignore();
            getline(cin, transmission);
            setTrans(transmission);
            break;
        }
        }
    } while (choice != 0);
}

void Car::show() const {
    cout << "Car\n";
    cout << "Brand: " << getBrand() << "\n";
    cout << "Model: " << getModel() << "\n";
    cout << "Engine: " << getEngine() << "\n";
    cout << "Color: " << getColor() << "\n";
    cout << "Transmission: " << getTrans() << "\n";
}