#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<a[i]+10<<"  ";
        }
        else
        {
            cout<<a[i]*2<<"  ";
        }
    }
    return 0;

}