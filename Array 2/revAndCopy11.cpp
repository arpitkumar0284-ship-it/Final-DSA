#include<iostream>
#include<vector>
using namespace  std;
int main()
{
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
   vector<int> v2(v.size());
   for(int i=0;i<v.size();i++)
   {
      v2[i] = v[v.size()-1-i]; // reverse copy
   }
   for(int i=0;i<n;i++)
   {
       cout<<v2[i]<<" ";
   }
   
}