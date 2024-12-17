#include "Keeper.h"
#include "Bus.h"
#include "Car.h"
#include "Motorcycle.h"
using namespace std;
Keeper::Keeper() : vehicles(nullptr), counter(0) {}

Keeper::~Keeper() {
    clear();
}

void Keeper::clear() {
    for (int i = 0; i < counter; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
    counter = 0;
     vehicles = nullptr;
}

void Keeper::add(Vehicle* vehicle) {
    Vehicle** temp = new Vehicle*[counter + 1];
    for (int i = 0; i < counter; ++i) {
        temp[i] = vehicles[i];
    }
    temp[counter] = vehicle;
    delete[] vehicles;
    vehicles = temp;
    ++counter;
}

void Keeper::remove(int index) {
    if (index < 0 || index >= counter) {
        cerr << "Invalid index.\n";
        return;
    }
    delete vehicles[index];
    for (int i = index; i < counter - 1; ++i) {
        vehicles[i] = vehicles[i + 1];
    }
    --counter;
}

void Keeper::show() const {
    for (int i = 0; i < counter; ++i) {
        vehicles[i]->show();
        cout << "-----------------------\n";
    }
}

void Keeper::save(const string& filename) {
    ofstream file(filename, ios::trunc);
    if (!file) {
        cerr << "Error opening a file for writing.\n";
        return;
    }

    for (int i = 0; i < counter; ++i) {
        if (dynamic_cast<Car*>(vehicles[i])) {
            file << "[car]\n";
        }else if (dynamic_cast<Bus*>(vehicles[i])) {
            file << "[bus]\n";
        }else if (dynamic_cast<Motorcycle*>(vehicles[i])) {
            file << "[motorcycle]\n";
        }
        vehicles[i]->save(file);
    }
    file.close();
    cout << "Saved.\n";
}

void Keeper::load(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening the file for reading.\n";
        return;
    }

    clear();
    string line;
    while (getline(file, line)) {
        Vehicle* vehicle = nullptr;
        if (line == "[car]"){
            vehicle = new Car();
        }else if (line == "[bus]") {
            vehicle = new Bus();
        } else if (line == "[motorcycle]") {
            vehicle = new Motorcycle();
        }
        if (vehicle) {
            vehicle->load(file);
            add(vehicle);
        }
    }
    file.close();
    cout << "The data is downloaded from a file.\n";

}

void Keeper::rename(int index){
    if (index < 0 || index >= counter) {
        cerr << "Invalid index.\n";
        return;
    }
    vehicles[index]->menu();
    vehicles[index]->show();
    cout << "-----------------------\n";
}