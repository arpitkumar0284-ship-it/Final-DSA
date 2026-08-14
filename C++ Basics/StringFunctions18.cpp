#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   //string str = "Arpit is a CSE Student";
   //cout<<str.size()<<"\n";
   //cout<<str.length()<<"\n";  //both are same

   /*
   string str = "abcde";
   cout<<str<<"\n";
   str.push_back('f');
   str.push_back('g');
   str.push_back('h');
   str.push_back('i');
   cout<<str<<endl;

   string s = "abc";
   cout<<s<<"\n";
   s = "xyz" + s;  //add
   cout<<s<<endl;
   */

   string s= "abcdef";
   cout<<s<<endl;
   reverse(s.begin(),s.end());
   cout<<s<<endl;
}