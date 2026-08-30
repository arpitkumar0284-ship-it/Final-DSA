#include<iostream>
using namespace std;
class Student{
public: 
      string name;
      int rno;
      float marks;
      Student(string name, int rno, float marks)
      {
        this->name=name;
        this->rno=rno;
        this->marks=marks;
      }
};
int main()
{
    Student s("Arpit", 275, 98.57);
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
}