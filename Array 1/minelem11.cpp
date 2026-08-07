#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int mn=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mn)
        {
            mn=arr[i];
        }
    }
      cout<<"The minimum element of an array is:"<<mn<<endl;
      return 0;
}