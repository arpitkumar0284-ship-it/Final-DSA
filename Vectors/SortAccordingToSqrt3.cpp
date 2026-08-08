//sort the given set of numbers according to the square root of absolute value.
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
static bool cmp(int x, int y)
{
    double d1= sqrt(abs(x));
    double d2 =sqrt(abs(y));
    if(d1<d2)
      return true;
    else
      return false;
}
int main()
{
    vector<int>v;
    v.push_back(100);
    v.push_back(-7);
    v.push_back(29);
    v.push_back(33);
    v.push_back(-20);
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