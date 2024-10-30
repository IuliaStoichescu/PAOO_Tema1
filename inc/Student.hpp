#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>

    class Student
    {
       private : 
       std::string name; 
       int id;
       int* grades;
       int nrgrades;

       public :
       Student(const std::string& name,int id,int nrgrades);
       ~Student();

       void addGrades(float grade);
       void showGrades();
       float calculateTotal();

       std::string getName() const; //incapsulare
       int getID() const; //incapsulare
    };

#endif