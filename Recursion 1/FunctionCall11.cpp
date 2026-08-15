#include<iostream>
using namespace std;
void gun()
{
    cout<<"Hello PW"<<endl;
    
}
void fun()
{
    cout<<"Hello CW"<<endl;
    gun();
}
int main()
{   
     int x,y;
     x=6;
     y=8;
     cout<<x<<" "<<y<<endl;
     swap(x,y);
     cout<<x<<" "<<y<<endl;
     cout<<min(x,y)<<endl;
     cout<<max(x,y)<<endl;
     fun();

}