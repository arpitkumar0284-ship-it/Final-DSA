#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter no. of rows in 1st matrix:";
    cin>>m;
    int n;
    cout<<"Enter no. of cols in 1st matrix:";
    cin>>n;

    int p;
    cout<<"Enter no. of rows in 2nd matrix:";
    cin>>p;
    int q;
    cout<<"Enter no. of cols in 1st matrix:";
    cin>>q;

   if(n==p)
   {
         int a[m][n];
    cout<<"Enter elem in 1st matrix:";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int b[p][q];
    cout<<"Enter elem in 2nd matrix:";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }

    int res[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<p;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
        cout<<endl;
    }
    //print
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
   }
   else
   {
      cout<<"Matrix cannot be multiply";
   }
}