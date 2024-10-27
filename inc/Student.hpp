#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>

namespace Student
{
    class Student
    {
       private : 
       std::string name; 
       int id;
       std::vector<float> grades;

       public :
       Student(const std::string& name,int id);
       ~Student() = default;

       void addGrades(int grade);
       void showGrades();
       float calculateTotal();

       std::string getName() const; //incapsulare
       int getGrade() const; //incapsulare
    };
}

#endif