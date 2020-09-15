#include <iostream>
#include <string>
#include "Student.cpp"

using namespace std;

int main()
{
    int id, batch, gradyear;
    string discipline,cours;
    int size = 0;
    cout << "Enter Size: ";
    cin >> size;
    Student *std = new Student[size];
    for (int i = 0; i < size;i++)
    {
        cin >> id;
        cin >> batch;
        cin >> gradyear;
        cin >> discipline;
        string *courses = new string[4];
        for (int i = 0; i < 4;i++)
        {
            cin >> cours;
            courses[i] = cours;
        }
        std[i] = Student(id, batch, discipline, gradyear, *courses, size);
    }
}