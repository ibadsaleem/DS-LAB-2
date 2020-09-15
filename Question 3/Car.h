#include <iostream>
#ifndef CAR_H
#define CAR_H

using namespace std;

class Car{

    int reg_no;
    int model;
    int no_of_wheels;
    public:

    Car(){}                                 //Default Constructor
    Car(int rn, int md, int nw);            //Parameterized Constructor
    Car(const Car &p1);                     //Copy Constructor
    ~Car();                                 //destructor

    void Display();


};
#endif