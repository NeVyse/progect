#include <iostream>
#include "Keeper.h"
#include "Car.h"
#include "Bus.h"
#include "Motorcycle.h"
using namespace std;
int main() 
{
    Keeper keeper;
    int choice;
    do {
        cout << "1. Add car\n";
        cout << "2. Add bus\n";
        cout << "3. Add motorcycle\n";
        cout << "4. Show all cargo vehicle\n";
        cout << "5. Delete cargo vehicle\n";
        cout << "6. Save to file\n";
        cout << "7. Download from file\n";
        cout << "8. Edit an entry\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice)
        {
                case 1: {
                   string brand, model, engine, color, transmission; 
                cout << "Enter brand: "; 
                cin.ignore(); 
                getline(cin, brand); 
                cout << "Enter model: "; 
                getline(cin, model);                  
                cout << "Enter engine volume: "; 
                getline(cin, engine ); 
                cout << "Enter color: "; 
                getline(cin, color); 
                cout << "Enter transmission type: "; 
                getline(cin, transmission); 
                    keeper.add(new Car(brand, model, engine, color, transmission));
                    break;  
                }
                case 2: {
                    string brand, model, seat, total, finaldest;
                    cout << "Enter brand: ";
                    cin.ignore();
                    getline(cin, brand);
                    cout << "Enter model: ";
                    getline(cin, model);
                    cout << "Enter seating capacity: ";
                    getline(cin, seat);
                    cout << "Enter total capacity: ";
                    getline(cin, total);
                    cout << "Enter final destination: ";
                    getline(cin, finaldest);
                    keeper.add(new Bus(brand, model, seat, total, finaldest));
                    break;
                }
                case 3: {
                    string brand, model, engine, power, terrain;
                    cout << "Enter brand: ";
                    cin.ignore();
                    getline(cin, brand);
                    cout << "Enter model: ";
                    getline(cin, model);
                    cout << "Enter engine: ";
                    getline(cin, engine);
                    cout << "Enter power: ";
                    getline(cin, power);
                    cout << "Enter terrain: ";
                    getline(cin, terrain);
                    keeper.add(new Motorcycle(brand, model, engine, power, terrain));
                    break;
                }
                case 4:
                    keeper.show();
                break;
                case 5: {
                    int index;
                    cout << "Enter index of the cargo vehicle to delete: ";
                    cin >> index;
                    keeper.remove(index - 1);
                    break;
                }
                case 6: {
                    string filename;
                    cout << "Enter file's name to save: ";
                    cin >> filename;
                    keeper.save(filename);
                    break;
                }
                case 7: {
                    string filename;
                    cout << "Enter file's name to download: ";
                    cin >> filename;
                    keeper.load(filename);
                    break;
                }
                case 8: {
                    int index;
                    cout << "Enter index of the cargo to edit: ";
                    cin >> index;
                    keeper.rename(index - 1);
                    break;
                }
            }
        }
    while (choice != 0);

return 0;
}