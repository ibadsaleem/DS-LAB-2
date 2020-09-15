#include <iostream>
#include "Car.cpp"
#include <string>
using namespace std;

int main()
{
   
    int reg, model, numwheels;
    
    cout << "Enter Reg Number: ";
    cin >> reg;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Number of Wheels: ";
    cin >> numwheels;

    Car C1(reg, model, numwheels);
    Car C2 = C1;
    cout << "Displaying C1\n" << endl;
    C1.Display();
    cout << "\nDisplaying C2\n";
    C2.Display();
    return 0;
}