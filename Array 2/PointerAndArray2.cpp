#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,7,6,5,42};
    int *ptr=arr;
    // cout<<ptr<<endl;
    // ptr[0]=96;
    for(int i=0;i<5;i++)
    {
         cout<<*ptr<<" ";
         ptr++;
    }
    ptr=arr;
}

// int arr[] = {4,2,6,1,7};
//     int* ptr = arr;
//     cout<<ptr<<"\n";
//     for(int i=0;i<5;i++)
//     {
//         cout<<ptr[i]<<" ";
//     }