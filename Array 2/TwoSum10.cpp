#include<iostream>
#include<vector>
using namespace  std;
int main()
{
   int x;
   cout<<"Enter the target:";
   cin>>x;
   vector<int> v;
   int n;
   cout<<"Enter array size:";
   cin>>n;
   cout<<"Enter array elements:";
   for(int i=0;i<n;i++)
   {
       int elem;
       cin>>elem;
       v.push_back(elem);
   }
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(v[i]+v[j]==x)
        {
          cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
   }
}