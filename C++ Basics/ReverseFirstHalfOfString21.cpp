#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  //reverse first half
  int length = s.length();
  reverse(s.begin(),s.begin() + length/2);
  cout<<s;

}