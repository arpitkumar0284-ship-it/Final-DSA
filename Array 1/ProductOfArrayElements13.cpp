#include<iostream>
using namespace std;
int main()
{
       int n;
       cout<<"Enter n:"<<endl;
       cin>>n;
       int product=1;
       int a[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
        product =product*a[i];
       }
       cout<<"product of all the elements:"<<product<<endl;
       return 0;

}