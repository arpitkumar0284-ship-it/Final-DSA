#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n];
    int result=0;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]*arr[i]<<"  ";
    }
      return 0;
}