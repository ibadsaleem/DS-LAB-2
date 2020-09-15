#include "Student.h"
#include <iostream>

using namespace std;

// Student Student::operator[](int i){
//     Student Std;
//     if (i > no_of_std)
//     {
//         cout << "Wrong";
//         exit(0);
//     }
    
//     return Std[i];
    
// } 
	Student &Student::operator [] (int index){		//for courses
        Student *std;
        if (index >= no_of_std || index < 0)
        {
            cout << "out of bounds";
            exit(0);
        }
        return std[index];
        }
