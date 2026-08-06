#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int len=s.length();
   vector<int> v(26,0);
   for(int i=0;i<len;i++)
   {
       char ch=s[i];
       v[ch-97]++;
   }
   int max_freq=0;
   for(int i=0;i<26;i++)
   {
       if(v[i]>max_freq)
       {
          max_freq=v[i];
       }
   }
   for(int i=0;i<26;i++)
   {
    if(v[i]==max_freq)
    {
        int ascii=i+97;
        char ch= char(ascii);
        cout<<ch<<" "<<max_freq<<endl;
    }
   }
}
