#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter no. of rows in matrix:";
    cin>>m;
    int n;
    cout<<"Enter no. of cols in matrix:";
    cin>>n;
    int a[m][n];
    cout<<"Enter the elements:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    // column wise wave printing
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
   
}