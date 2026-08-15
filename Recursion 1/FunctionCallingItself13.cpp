#include<iostream>
using namespace std;
// void fun()
// {
//     cout<<"Hello PW"<<endl;
//     fun();   ---->This is called the endless function calling itself and gives segmentation 
//     so we have to apply some condition to break this loop  
// }
void fun(int n)
{
    if(n==0) return;
    cout<<"Hello Arpit"<<endl;
    fun(n-1);
}
int main()
{
     fun(3);
}