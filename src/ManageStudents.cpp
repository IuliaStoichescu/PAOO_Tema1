#include "../inc/ManageStudents.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void ManageStudents::addStudents(const Student& student)
{
    s.push_back(student);
}

Student* ManageStudents::findStudent(int id)
{
    for(auto & stud : s)
    {
        if(stud.getID()==id)
        {
            return &stud;
        }
    }
    return nullptr;
}

void ManageStudents::showStudents()const
{
    for(auto & stud : s)
    {
        cout<<"Studentul : "<<stud.getName()<<" cu ID : "<<stud.getID()<<endl;
    }
}

void ManageStudents::deleteStudent(int id)
{
    for(auto i = s.begin();i!=s.end();++i)
    {
        if(i->getID()==id)
        {
            s.erase(i);
            break;
        }
    }
}