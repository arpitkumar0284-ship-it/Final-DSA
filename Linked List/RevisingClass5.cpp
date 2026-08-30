#include<iostream>
using namespace std;
class Student{
public: 
      string name;
      int rno;
      float marks;
      Student(string n, int r, float m)
      {
        name=n;
        rno=r;
        marks=m;
      }
};
int main()
{
    Student s("Arpit", 275, 98.57);
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.marks<<endl;
}