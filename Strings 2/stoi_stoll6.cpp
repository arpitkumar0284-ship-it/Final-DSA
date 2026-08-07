#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="123456";
    //integer
    int x=stoi(str);
    cout<<x<<endl;
    int y=x+1;
    cout<<y<<endl;
    int a=1234567;
    string s=to_string(a);
    cout<<s<<endl;
    string t=s+"1";
    cout<<t<<endl;
    //long long
    string p="1234567891234";
    long long z=stoll(p);
    cout<<z<<endl;
}
