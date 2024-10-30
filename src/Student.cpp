#include "../inc/Student.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


        Student::Student(const string& name, int id,int nrgrades):name(name),id(id),nrgrades(nrgrades)
        {
           grades = new int[nrgrades];//dinamic memory for the student grades
           fill(grades,grades+nrgrades,0);//initialize all gradees with 0
        }

        Student::~Student()
        {
            delete[] grades;
        }

        string Student::getName()const
        {
            return name;
        }

        int Student::getID()const
        {
            return id;
        }

        void Student::addGrades(float grade)
        {
            //grades.push_back(grade);
            if(nrgrades>0)
            {
                grades[nrgrades-1]=grade;
            }
        }

        void Student::showGrades()
        {
            cout<<"Grades of "<<name<<" with ID "<<id<<" are:"<<endl;
            for(float g ;g<nrgrades;g++)
            {
                cout<<g<<" ";
            }
            cout<<endl;
        }

        float Student::calculateTotal()
        {
            float media = 0.0;
            if(nrgrades=0) return 0.0;
            else 
            {
                for(int i=0;i<nrgrades;i++)
                {
                    media+=grades[i];
                }
            }
            return static_cast<double>(media)/nrgrades;
        }


