#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v)
{
    int n = v.size();
    int countone = 0;
    int countzero = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) countzero++;
        else countone++;
    }

    for(int i=0;i<n;i++)
    {
        if(i<countzero) v[i] = 0;
        else v[i] = 1;
    }
}
void sort01m2(vector<int>& v)
{
      int n=v.size();
      int i=0;
      int j=n-1;
      while(i<j)
      {
        if(v[j]==1) 
        {
            j--;
        }
       else if(v[i]==0)
       {
            i++;
       }
         else
         {
            swap(v[i], v[j]);
            i++;
            j--;
         }
      }
}
int main()
{ 
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01m2(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}