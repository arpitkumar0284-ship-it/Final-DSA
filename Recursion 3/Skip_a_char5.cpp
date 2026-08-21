#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string ans="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='a') ans.push_back(str[i]);
    }
    cout<<ans;
}