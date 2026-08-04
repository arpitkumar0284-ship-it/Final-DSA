#include<iostream>
using namespace std;
int main()
{
   int m;
   cout<<"Enter the no. of rows:";
   cin>>m;
   int n;
   cout<<"Enter the no. of colums:";
   cin>>n;
   int arr[m][n];
   cout<<"Enter the elements:";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
   }
    int max=arr[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }

    }
    cout<<max;
}