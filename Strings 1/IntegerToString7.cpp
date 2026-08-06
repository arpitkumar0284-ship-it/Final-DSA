#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int x=1234567;
    // conversion of intger to string
    string s= to_string(x);
    cout<<s<<endl;
    cout<<s.length()<<endl;
}
