#include "../inc/Student.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;


        Student::Student(const char* nameInit, int id):id(id)
        {
            //alocam dinamic spatiu, constructor simplu
           name = new char[strlen(nameInit)+1];
           strcpy(name,nameInit);
        }

        Student::Student(const Student &other):id(id)
        {
            //aloca memorie si se copiaza datele astfel incat fiecare obiect sa fie o copie a codului sursa
            name = new char[strlen(other.name) + 1];//
            strcpy(name, other.name);
        }

        Student::~Student()
        {
            delete[] name;
        }

        char* Student::getName()const
        {
            return name;
        }

        int Student::getID()const
        {
            return id;
        }

        void Student::addGrades(float grade)
        {
            grades.push_back(grade);
        }

        void Student::showGrades()
        {
            cout<<"Grades of "<<name<<" with ID "<<id<<" are:"<<endl;
            for(auto i : grades)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

        float Student::calculateTotal()
        {
            float media = 0.0;
            if(grades.empty()) 
            {
                return 0.0;
            }
            else 
            {
                for(auto i : grades)
                {
                    media+=i;
                }
            }
            return media/grades.size();
        }


