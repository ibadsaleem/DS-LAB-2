#include <iostream>
#include "Car.h"
#include <string>
using namespace std;

void Car::Display()
{

    cout << "Registration Number: " << reg_no<<endl;
    cout << "Model: " << model<<endl;
    cout << "Wheels: " << no_of_wheels<<endl;

}

Car::Car ( int rn, int md, int nw)
{ 
        reg_no = rn;
        model = md;
        no_of_wheels = nw;
}

Car::~Car()      //destructor
{  
    reg_no = 0;
    model = 0;
    no_of_wheels = 0;
}
 
Car::Car(const Car &p1) { 
        reg_no = p1.reg_no;
        model = p1.model;
        no_of_wheels = p1.no_of_wheels;
    }
