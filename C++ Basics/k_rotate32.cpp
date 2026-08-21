#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string str;
    cin>>str;
    int sum=0;
    string t = "";
    for(int i=0;i<str.length();i++)
    {
        if(isdigit(str[i]))  
        {
            sum=sum+ (str[i]-'0' )*(str[i]-'0' );
        }
        else{
            t += str[i];
        }
    }
    int k=sum;
    if(k%2==0)
    { 

        k=k%t.size();
        string s3= t.substr(t.size()-k)+t.substr(0,t.size()-k);
        cout<<s3;
    }
    else
    {
        k=k%t.size();
        string s4=t.substr(k)+t.substr(0,k);
        cout<<s4;
    }

}

