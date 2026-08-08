//input sorted array (-3,-2,-1,0,2,4) and sort on the basis of equation Ax2+Bx+C, A=-1,B=-4,C=1.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x, int y)
{   int A=-1;
    int B=-4;
    int C=1;
    int a=(A*x*x)+(B*x)+C;
    int b=(A*y*y)+(B*y)+C;
    if(a<b)
      return true;
    else
      return false;
}
int main()
{
    vector<int>v;
    v.push_back(-3);
    v.push_back(-2);
    v.push_back(-1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";   
    }
    cout<<"\n\n";
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}