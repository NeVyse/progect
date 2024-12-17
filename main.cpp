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
        cout << "2. Add sailer\n";
        cout << "3. Add boat\n";
        cout << "4. Show all cargo ships\n";
        cout << "5. Delete cargo ship\n";
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
                    string name, type, title, target, length, speed, crew;
                    cout << "Enter name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter type: ";
                    getline(cin, type);
                    cout << "Enter title: ";
                    getline(cin, title);
                    cout << "Enter target: ";
                    getline(cin, target);
                    cout << "Enter length: ";
                    getline(cin, length);
                    cout << "Enter speed: ";
                    getline(cin, speed);
                    cout << "Enter crew: ";
                    getline(cin, crew);
                    keeper.add(new Sailer(name, type, title, target, length, speed, crew));
                    break;
                }
                case 3: {
                    string name, target, material, RP, speed, people;
                    cout << "Enter name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter target: ";
                    getline(cin, target);
                    cout << "Enter material: ";
                    getline(cin, material);
                    cout << "Enter RP: ";
                    getline(cin, RP);
                    cout << "Enter speed: ";
                    getline(cin, speed);
                    cout << "Enter people: ";
                    getline(cin, people);
                    keeper.add(new Boat(name, target, material, RP, speed, people));
                    break;
                }
                case 4:
                    keeper.show();
                break;
                case 5: {
                    int index;
                    cout << "Enter index of the cargo ship to delete: ";
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