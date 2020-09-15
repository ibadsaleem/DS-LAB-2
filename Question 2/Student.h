#include <iostream>

#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class Student{
    int Batch;
    string Discipline;
    int Graduation_Year;
    string Courses[4]; //for example 4 courses.
    int no_of_std;
public:
    int ID;
    // reference as array element can be put on left side
    Student(){}
    Student(int id,int batch,string discipline,int year,string &course,int size){
        ID = id;
        Batch = batch;
        Discipline = discipline;
        Graduation_Year = year;
        no_of_std = size;
        for (int i = 0; i < 4;i++)
        {
            Courses[i] = course[i];
        }
    }
   Student &operator[](int index);
   void Display() { cout << "h"; }
};
#endif