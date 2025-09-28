// Papri Sen
// 24070123070
// A3

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string model;
    int year;
    int price;
    float mileage;
};

int main() {
    Car c1;
    cout << "Enter car name: ";
    cin>>c1.name;
    cout << "Enter car model: ";
    cin>>c1.model;
    cout << "Enter car year: ";
    cin >>c1.year;
    cout<<"Enter car price:";
    cin>>c1.price;
    cout << "Enter car mileage: ";
    cin >>c1.mileage;

    cout << "\nCar Details:\n";
    cout << c1.name << endl;
    cout << c1.model << endl;
    cout << c1.year << endl;
    cout << c1.price << endl;
    cout << c1.mileage << " km" << endl;

    return 0;
}
/*
Output:
Enter car name: Jazz
Enter car model: Honda
Enter car year: 2015
Enter car price:700000
Enter car mileage: 17.5

Car Details:
Jazz
Honda
2015
700000
17.5 km
*/
