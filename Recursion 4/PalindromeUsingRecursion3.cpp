#include<iostream>
#include<string>
using namespace std;
bool IsPalindrome(string str,int i,int j)
{
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return IsPalindrome(str,i+1,j-1);
}
int main()
{
    string str;
    getline(cin,str);
    cout<<IsPalindrome(str,0,str.length()-1);
}