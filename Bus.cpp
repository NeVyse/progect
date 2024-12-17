#include "Bus.h"
using namespace std;
void Bus::save(ofstream& file) {
    file << getBrand() << "\n";
    file << getModel() << "\n";
    file << getSeat() << "\n";
    file << getTotal() << "\n";
    file << getFinal() << "\n";
}

void Bus::load(ifstream& file) {
    getline(file, brand);
    setBrand(brand);
    getline(file, model);
    setModel(model);
    getline(file, seat);
    setSeat(seat);
    getline(file, total);
    setTotal(total);
    getline(file, finaldest);
    setFinal(finaldest);
}

void Bus::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change brand\n";
        cout << "3. Change model\n";
        cout << "4. Change seating capacity\n";
        cout << "5. Change total capacity\n";
        cout << "6. Change final destination\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            show();
            break;
        case 2: {
            string newName;
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
            cout << "Enter seating capacity: ";
            cin.ignore();
            getline(cin, seat);
            setSeat(seat);
            break;
        }
        case 5: {
            cout << "Enter total capacity: ";
            cin.ignore();
            getline(cin, total);
            setTotal(total);
            break;
        }
        case 6: {
            cout << "Enter final destination: ";
            cin.ignore();
            getline(cin, finaldest);
            setFinal(finaldest);
            break;
        }
        }
    } while (choice != 0);
}

void Bus::show() const {
    cout << "Bus\n";
    cout << "Brand: " << getBrand() << "\n";
    cout << "Model: " << getModel() << "\n";
    cout << "Seating capacity: " << getSeat() << "\n";
    cout << "Total capacity: " << getTotal() << "\n";
    cout << "Final destination: " << getFinal() << "\n";
}