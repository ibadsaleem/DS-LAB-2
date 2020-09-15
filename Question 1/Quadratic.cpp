#include <iostream>
#include "Quadratic.h"
#include <math.h>

using namespace std;

void Quadratic::Calculate(double i,double j, double k){
 // formula of quadratic equations ----->>>  -b±√(b²-4ac))/(2a)
      double product=(j*j)-4*i*k;
      if (product<0)
      {
	  cout<<"Root1: ("<<-j<<"+"<<"sqrt("<<product<<")i)"<<"/"<<2*i<<endl;
	  cout<<"Root2: ("<<-j<<"-"<<"sqrt("<<product<<")i)"<<"/"<<2*i;
	  }
	  else{
	  

	  root1 =(-j+sqrt(product))/2*i;
   	  root2 = (-j-sqrt(product))/2*i;
   	  Quadratic::Display(root1,root2);
}
}

void Quadratic::Display(double a,double b){
	cout<<"Root1: "<<a<<"\nRoot2: "<<b;
}

