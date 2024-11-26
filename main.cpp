#include "RentalSystem/RentalSystem.h"
#include <iostream>
using namespace std;

int main() {
    RentalSystem rentalSystem;
    int choice;

    do {
        cout << "\n--- Car Rental System ---\n";
        cout << "1. Add Car\n";
        cout << "2. Add Staff Member\n";
        cout << "3. Display All Cars\n";
        cout << "4. Display All Staff Members\n";
        cout << "5. Update Car Rental Status\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string id, name, brand, model, color, energySource;
                int year;
                bool status;

                cout << "Enter Car ID: ";
                cin >> id;
                cout << "Enter Car Name: ";
                cin >> name;
                cout << "Enter Car Brand: ";
                cin >> brand;
                cout << "Enter Car Model: ";
                cin >> model;
                cout << "Enter Car Year: ";
                cin >> year;
                cout << "Enter Car Color: ";
                cin >> color;
                cout << "Enter Car Energy Source (e.g., Gasoline, Electric): ";
                cin >> energySource;
                cout << "Is the car available? (1 for Yes, 0 for No): ";
                cin >> status;

                Car car(id, name, (status ? "Available" : "Rented"), brand, model, year, color, energySource);
                rentalSystem.addCar(car);
                cout << "Car added successfully!\n";
                break;
            }
            case 2: {
                string id, name, status, homeAddress;
                int age;
                double hourPayRate;

                cout << "Enter Staff ID: ";
                cin >> id;
                cout << "Enter Staff Name: ";
                cin >> name;
                cout << "Enter Staff Status (occupied, free or off-work): ";
                cin >> status;
                cout << "Enter Staff Age: ";
                cin >> age;
                cout << "Enter Staff Hourly Pay Rate: ";
                cin >> hourPayRate;
                cout << "Enter Staff Home Address: ";
                cin.ignore();
                getline(cin, homeAddress);

                Staff staff(id, name, status, age, hourPayRate, homeAddress);
                rentalSystem.addStaff(staff);
                cout << "Staff member added successfully!\n";
                break;
            }
            case 3: {
                rentalSystem.displayCars();
                break;
            }
            case 4: {
                rentalSystem.displayStaff();
                break;
            }
            case 5: {
                string id;
                bool status;

                cout << "Enter Car ID to update: ";
                cin >> id;
                cout << "Update rental status. Is the car available? (1 for Yes, 0 for No): ";
                cin >> status;

                rentalSystem.updateCarRentalStatus(id, status);
                break;
            }
            case 6: {
                cout << "Exiting system. Goodbye!\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    } while (choice != 6);

    return 0;
}
