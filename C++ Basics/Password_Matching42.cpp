#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string r;
    cin>>r;
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++)
    {   
        if(v[i]>0)
        {    v[i]=v[i]%s.size();
            //Right rotation of s v[i] times
            s=s.substr(s.size()-v[i],v[i])+s.substr(0,s.size()-v[i]);
        }
        else{
            v[i]=abs(v[i]);
            v[i]=v[i]%s.size();
            //Left rotation of s v[i] times
           s=s.substr(v[i],s.size()-v[i])+s.substr(0,v[i]);
        }
    }
   if(s==r)
   {
    cout<<"Password accepted";
   }
   else{
    cout<<"Try Again";
   }

}