#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string temp;
    stringstream ss(str);
    vector<string> v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }

    int count=1;
    int max_count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
        max_count=max(max_count,count);
    }

    count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==max_count)
        {
            cout<<v[i]<<" "<<max_count<<endl;
        }
    }   
}
