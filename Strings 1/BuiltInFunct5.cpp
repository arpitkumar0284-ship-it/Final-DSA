#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    cout<<len<<endl; //prints the length of the string
    cout<<s.size()<<endl;  ////prints the size of the string
    string s1="abcd";
    string s2="efgh";
     //push operation like in vector
    s1.push_back('m');
    s1.push_back('q');
    s1.push_back('r');
    s1.push_back('s');
    cout<<s1<<endl;
    //pop operation
    s1.pop_back();
    cout<<s1<<endl;
    // concatenation of two strings
    cout<<s1+s2<<endl;
    string s3=s1+s2;
    cout<<s3+"arpit"<<endl;
    // reverse operation
    reverse(s3.begin(),s3.end());  // we can also use indexing at begin and end to reverse the substring and take last index one extra at the end
    cout<<s3<<endl;
    //we can also print substring using built in funct.
    cout<<s3.substr(3,7)<<endl;  //first no. is the idx and second one is the length from that index to be printed
    cout<<s3.substr(3)<<endl; 
}
