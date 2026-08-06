#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    // cin>>str;   //if we take the input like this then only one word will be printed
    // cout<<str<<endl;  
    getline(cin,str) ;  // if we take the input like this then we can print the entire line
    cout<<str;
}
