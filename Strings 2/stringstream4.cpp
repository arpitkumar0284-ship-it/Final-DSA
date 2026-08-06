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
    int len=str.length();
    stringstream ss(str);
    string temp;
    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
     
}
