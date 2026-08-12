#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(100);
    v.push_back(-7);
    v.push_back(50);
    v.push_back(20);
    v.push_back(-20);
    v.push_back(600);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";   
    }
    cout<<"\n\n";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}