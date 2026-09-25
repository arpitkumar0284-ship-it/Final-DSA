#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n;
    cin>>n;
    int len=str.length();
    string comp="";
    int i=0;
    while(i<len)
    {
        int j=i+1;
        int count=1;
        while(str[i]==str[j])
        {
            j++;
            count++;
        }
        if(count>=n)
        {
            comp.push_back(str[i]);
            comp+=to_string(count);
        }
        else{
            string t=str.substr(i,count);
            comp+=t;
        }
        i=j;
    }
    cout<<comp;
}