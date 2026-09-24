#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    int count=0;
    int i=0;
    int j=0;
    while(i<str1.size() && j<str2.size())
    {
        if(str1[i]==str2[j])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if(count>=3 && count<=5 && count==str2.size())
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}