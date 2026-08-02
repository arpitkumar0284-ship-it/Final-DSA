#include<iostream>
using namespace std;
int main()
{
    int students;
    cout<<"Enter the total no. of stud:"<<"\n";
    cin>>students;
    int marks[students];
    cout<<"Enter the marks of std:"<<"\n";
    for(int i=0;i<students;i++)
    {
        cin>>marks[i];
    }
     for(int i=0;i<students;i++)
    {
       if(marks[i]<35)
       {
        cout<<"Student with less than 35 marks is:"<<i<<"\n";
       }
    }
}