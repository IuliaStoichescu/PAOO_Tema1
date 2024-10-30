#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>

    class Student
    {
       private : 
       char* name; 
       int id;
       std::vector<float> grades;

       public :
       Student(const char* name,int id);
       Student(const Student& other);//copy constructor
       ~Student();

       void addGrades(float grade);
       void showGrades();
       float calculateTotal();

       char* getName()const; //incapsulare
       int getID() const; //incapsulare
    };

#endif