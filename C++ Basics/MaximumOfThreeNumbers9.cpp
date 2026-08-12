#include<iostream>
using namespace std;
int maximum(int a, int b, int c)
{   
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c && b>a)
    {
        return b;
    }
    else
    return c;
}
int main()
{
    int a=2;
    int b=3;
    int c=7;
    cout<<maximum(a,b,c);
}