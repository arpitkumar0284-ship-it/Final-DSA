#include<iostream>
using namespace std;
int BinaryExpo(int a, int n)
{
  if(n==0)
   return 1;
   else
    {
        int p;
        p=BinaryExpo(a,n/2);
     if(n%2==0)
       return p*p;
     else
      return a*p*p;
    }
}
int main()
{
    cout<<BinaryExpo(2,6);
}
