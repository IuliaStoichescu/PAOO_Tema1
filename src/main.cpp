#include <iostream>
#include "../inc/Student.hpp"
using namespace std;

int main()
{
   vector <string> students{"Emilia","Constantine","Veronica"};

   Student student1(students[0],6);

   student1.addGrades(8.9);
   student1.addGrades(9.8);
   student1.calculateTotal();
   
   cout<<"Original student details : ";
   student1.showGrades();
   cout<<"And average grade is "<<student1.calculateTotal()<<endl;

   //now we use the functionality of the copy constructor creating an object after the first one
   Student student2=student1;
   cout<<"Student 2 "<<student2.getName()<<" with ID "<<student2.getID()<<endl;
   student2.showGrades();

   //now we use the functionality of the move constructor, creates a student by moving student1
   Student student3 = move(student1);
   cout<<"Student 3 "<<student3.getName()<<" with ID "<<student3.getID()<<endl;
   student3.showGrades();
   cout<<"Student 1 after move : "<<student1.getName()<<" with ID "<<student1.getID()<<endl;

   //now we use the functionality of the copy assignment operator,
   Student student4(students[1],7);
   student4=student2;
   cout<<"Student 4 "<<endl;
   student4.showGrades();

   //now we use the functionality of the move assignment operator,move student5 to student3
   Student student5(students[2],10);
   student5.addGrades(7.8);
   student5.addGrades(9.0);
   student3 = move(student5);
   student3.showGrades();

   cout<<"Student 5 after move : "<<endl;
   cout<<"Student 5 "<<student5.getName()<<" with ID "<<student5.getID()<<endl;

   return 0;
}
