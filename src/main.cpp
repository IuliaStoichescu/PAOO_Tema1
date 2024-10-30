#include <iostream>
#include "../inc/ManageStudents.hpp"
//#include "../inc/Student.hpp";
using namespace std;

int main()
{
   ManageStudents ms;
   int opt;

   while(1)
   {
      cout<<"Options: "<<endl;
      cout<<"1:Add student"<<endl;
      cout<<"2:Delete student"<<endl;
      cout<<"3:Show student"<<endl;
      cout<<"4:Find student"<<endl;
      cout<<"0:Exit"<<endl;
      cin>>opt;
      switch(opt)
      {
         case 0: return 0;
         case 1: 
         {
               string name;
               int id;
               int nr;
               int nrgrades;
               cout<<"Name: ";
               cin>>name;
               cout<<"ID: ";
               cin>>id;
               cout<<endl;
               Student student(name,id,nrgrades);
               cout<<"Number of grades: ";
               cin>>nrgrades;
               for(auto i = 0;i<nrgrades;i++)
               {
                  float grade;
                  cout<<"Add grade: ";
                  cin>>grade;
                  cout<<endl;
                  student.addGrades(grade);
               }
               cout<<endl;
               student.calculateTotal();
               ms.addStudents(student);
               break;
         }
               
         case 2: 
         {
               int id;
               cout<<"I want to delete the student with ID: ";
               cin>>id;
               cout<<endl;
               ms.deleteStudent(id);
               break;
         }
               
         case 3:
         {
               ms.showStudents();
               break;
         }
               
         case 4:
         {
               int id;
               cout<<"I want to find student with ID: ";
               cin>>id;
               cout<<endl;
               Student *s = ms.findStudent(id);
               if(s)
               {
                  s->showGrades();
                  cout<<"Total : "<<s->calculateTotal()<<endl;
               }
               else cout<<"Student was not found"<<endl;
               break;
         }
               
         default:
         {
               cout << "Invalid option" << endl;
               break; 
         }
                  
      }
   }
   return 0;
}
