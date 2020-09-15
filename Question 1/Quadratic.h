#include <iostream>

#ifndef QUADRATIC_H
#define QUADRATIC_H




    class Quadratic{
        double a;
        double b;
        double c;
        double root1;
        double root2;
        
        public:
         
        // Quadratic(float i,float j,float k, float R1,float R2){a=i;b=j;c=k;root1=R1;root2=R2;}
        void Calculate(double,double,double);
		void Display(double,double);
         
         
    };
#endif

