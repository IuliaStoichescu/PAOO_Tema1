#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>

    class Student
    {
       private : 
       std::string name; 
       int id;
       std::vector<float> grades;

       public :
       Student(std::string& name,int id);//normal constructor
       Student(const Student& other);//copy constructor
       Student(Student&& other) noexcept;//move constructor

       Student& operator=(Student& other);//copy constructor operator
       Student& operator=(Student&& other) noexcept;//move constructor operator
       //operatpors are used to assign values from one object to another after both objects have been constructed
       //helps with moving contents , different from constructing objects

       ~Student();

       void addGrades(float grade);
       void showGrades();
       float calculateTotal();

       std::string getName()const; //incapsulare
       int getID() const; //incapsulare
    };

#endif