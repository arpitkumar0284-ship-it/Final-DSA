#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    string str=to_string(n);
    int sum1=0;
    for(char ch : str)
    {
        sum1+=ch-'0';
    }
    //string new_str=stoi(str) * k;
    int new_num=sum1*k;
    int sum=0;
    while(new_num>0)
    {
        int ld=new_num%10;
        sum=sum+ld;
        new_num=new_num/10;
    }
    int final_sum=0;
    while(sum>0)
    {
        int final_last=sum%10;
        final_sum=final_sum + final_last;
        sum=sum/10;
    }
    cout<<final_sum<<endl;

}