#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max) max=a[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>smax && a[i]!=max)
        {
            smax=a[i];
        }
    }
    cout<<max<<"\n";
    cout<<smax;

}