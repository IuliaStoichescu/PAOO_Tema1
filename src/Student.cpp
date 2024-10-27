#include "../inc/Student.hpp";
#include <string>
#include <vector>
#include <iostream>
using namespace std;

namespace Student
{
        Student::Student(const string& n, int i)
        {
            name=n;
            id=i;
        }

        string Student::getName()const
        {
            return name;
        }

        int Student::getID()const
        {
            return id;
        }

        void Student::addGrades(int grade)
        {
            grades.push_back(grade);
        }

        void Student::showGrades()
        {
            cout<<"Grades of "<<name<<" with ID "<<id<<" are:"<<endl;
            for(float g : grades)
            {
                cout<<g<<" ";
            }
            cout<<endl;
        }

        float Student::calculateTotal()
        {
            float media = 0.0;
            int size=0;
            float sum=0.0;
            if(grades.empty())
            {
                media = 0.0;
            }
            else
            {
                for(float g : grades)
                {
                    sum+=g;
                }
            }
            media = sum/grades.size();
            return media;
        }
}

