#include<iostream>
using namespace std;
int product(int a,int b)
{
    return a*b;
}
void greet()
{
    cout<<"Good Morning"<<endl;
    cout<<"How are you?"<<endl;
}
int main()
{   
     int x,y;
     cin>>x>>y;
     cout<<product(x,y)<<endl;
     greet();

}