#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string s1="";
    string s2="";
    for(int i=0;i<str.size();i++)
    {
        if((i+1)%4==0 || (i+1)%6==0)
        {
            s2.push_back(str[i]);
        }
        else
        {
            s1.push_back(str[i]);
        }
    }
    string new_str=s1+s2;
    cout<<new_str<<endl;
}