//Muhammad Ibad Saleem 19K0220 E1 Lab 2 
//Question 1 

#include <iostream>
#include "Quadratic.cpp"


using namespace std;

int main(){
    double a=0.0,b=0.0,c=0.0;
    Quadratic Q;
    cout<<"General Equation = ax^2+bx+c\n---------------\n";
    cout<<"Enter Coefficient of x^2: ";
    cin>>a;
    cout<<"Enter Coefficient of x: ";
    cin>>b;
    cout<<"Enter Constant (c): ";
    cin>>c;
    Q.Calculate(a,b,c);
    
}

