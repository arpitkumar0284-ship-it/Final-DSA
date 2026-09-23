#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string str1="";
    string str2="";
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(isalpha(str[i]))
        {
            str1+=tolower(str[i]);
        }
        else if(isdigit(str[i]))
        {
            str1+=str[i];
        }
        else{
            str2+=str[i];
        }
    }
    str1+=str2;
    cout<<str1;

}