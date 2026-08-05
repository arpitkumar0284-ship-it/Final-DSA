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
    cout<<endl;
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;

    cout<<"Printing of spiral matrix is:"<<endl;
    
    while(minr<=maxr && minc<=maxc)
    {
        //right
        for(int j=minc;j<=maxc;j++)
        {
            cout<<a[minr][j]<<" ";
        }
        minr++;

        //down
        for(int i=minr;i<=maxr;i++)
        {
            cout<<a[i][maxc]<<" ";
        }
        maxc--;

        //left
        for(int j=maxc;j>=minc;j--)
        {
            cout<<a[maxr][j]<<" ";
        }
        maxr--;

        //up
        for(int i=maxr;i>=minr;i--)
        {
            cout<<a[i][minc]<<" ";
        }
        minc++;

    }
    
}