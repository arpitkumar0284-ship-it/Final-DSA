#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x,int y)
{
    if (x%2==0 && y%2==0)
      return x>y;
    if (x%2==0 && y%2!=0)
      return true;
    if (x%2!=0 && y%2==0)
      return false;
    if (x%2!=0 && y%2!=0)
      return x<y;
}
int main(){
    vector<int>v;
    v.push_back(100);
    v.push_back(7);
    v.push_back(50);
    v.push_back(25);
    v.push_back(19);
    v.push_back(88);
    v.push_back(21);
    v.push_back(9);
    v.push_back(80);
    v.push_back(600);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; 
    }
    cout<<"\n\n";
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}