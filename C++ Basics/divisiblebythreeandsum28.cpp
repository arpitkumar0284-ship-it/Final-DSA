#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int start,end;
    cin>>start>>end;
    int count=0;
     vector<int> v;

   while(start<=end)
   {
    if(start%3==0)
    {
        v.push_back(start);
        count++;
    }
    start++;
   }
   int n=v.size();
   int final_count=0;
   for(int i=0;i<n;i++)
   {
       int num=v[i];
       int sum=0;
       while(num>0)
       {
        int last_dig=num%10;
        sum=sum+last_dig;
        num=num/10;
       }
       if(sum%2==0 )
       {
        final_count++;
       }
   }
   cout<<final_count<<endl;
}