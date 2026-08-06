#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   cout<<s<<endl;
   //sort->ascii values ke order me sort krke dega
   sort(s.begin(),s.end());
   cout<<s<<endl;
}
