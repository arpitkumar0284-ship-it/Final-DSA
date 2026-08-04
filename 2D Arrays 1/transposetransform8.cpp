#include<iostream>
using namespace std;
int main()
{
   int m;
   cout<<"Enter the no. of rows/columns:";
   cin>>m;
   int arr[m][m];
   cout<<"Enter the elements:";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
   }
    
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;

   //transpose in the same matrix
    for(int i=0;i<m;i++)
   {
    for(int j=i;j<m;j++)
    {
       swap(arr[i][j],arr[j][i]);
    }
    
   }
  
    for(int i=0;i<m;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

}