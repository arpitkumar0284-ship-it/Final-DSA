#include<iostream>
using namespace std;
int main()
{
  
   int s[2][4];
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<4;j++)
    {
        cin>>s[i][j];
    }
   }
    
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<4;j++)
    {
        cout<<s[i][j]<<" ";
    }
    cout<<endl;
   }
}