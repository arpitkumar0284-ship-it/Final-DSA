#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int n;
    cin>>n;
    int count=0;
    string str="";
    for(int i=0;i<s1.size();i++)
    {
        
         if(i!=0 && i%n==0)
         {
            str += s2;
         }
          str.push_back(s1[i]);
    }
   cout<<str<<endl;
    
}