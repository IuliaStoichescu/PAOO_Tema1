#ifndef MANAGE_STUDENTS_HPP 
#define MANAGE_STUDENTS_HPP 

#include <vector>
#include <string>
#include "Student.hpp"

class ManageStudents
{
    private: 
    std::vector<Student> s;

    public:
    void addStudents(const Student& student);
    void deleteStudent(int id);
    void showStudents()const;
    Student *findStudent(int id);
};

#endif