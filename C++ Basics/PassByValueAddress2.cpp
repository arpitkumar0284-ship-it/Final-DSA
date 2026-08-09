#include<iostream>
using namespace std;
void fun(int x, int y)
{
   cout << "Function x address: " << &x << endl;
   cout << "Function y address: " << &y << endl;
}
int main()
{
    int x=10;
    int y=20;
    cout << "Main x address: " << &x << endl;
    cout << "Main y address: " << &y << endl;
    fun(x,y);
}