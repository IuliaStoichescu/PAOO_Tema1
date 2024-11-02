#include "../inc/Student.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

        //Normal constructor, used for creating objects
        Student::Student(std::string &name, int id)
        {
            this->name = name;
            this->id=id;
        }

        //Copy constructor , member function that initializez an object using another object of the same class
        Student::Student(const Student &other):name(other.name),id(other.id),grades(other.grades)
        {
            cout<<"Copy constructor was called "<<endl;
            //we put grades here to ensure that the students object has all the corrected data at copy
        }

        //Copy assignment operator
        Student& Student::operator=(Student& other) 
        {
            if (this == &other) 
            {
                return *this; // handle self-assignment
            }

            name = other.name;       
            id = other.id;           
            grades = other.grades;   
            std::cout << "Copy assignment operator was called\n";
            
            return *this;
        }

        Student::Student(Student&& other) noexcept : name(move(other.name)),id(move(other.id)),grades(move(other.grades))
        {
             cout<<"Move constructor was called "<<endl;   
             other.id=0;//resets the id to invalid/empty state
        }

        //Move assignment operator
        Student& Student::operator=(Student&& other) noexcept
        {
            if (this == &other) 
            {
                return *this; // handle self-assignment
            }

            name = move(other.name);       
            id = move(other.id);           
            grades = move(other.grades);   
            std::cout << "Move assignment operator was called\n";

            other.name="";
            other.id=0;
            other.grades.clear();

            return *this;
        }

        //Deconstructor
        Student::~Student()
        {
           // delete[] &name,id;
           cout<<"Student object was destroyed"<<endl;
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


