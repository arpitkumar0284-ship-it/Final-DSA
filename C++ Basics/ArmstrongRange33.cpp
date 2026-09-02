#include <bits/stdc++.h>
using namespace std;

int main() {
	int lower;
	int upper;
	cin>>lower>>upper;
	vector<int> ans;
	for(int i=lower;i<=upper;i++)
	{
	    int sum=0;
	    int digit =i;
	    string str=to_string(digit);
	    int count=0;
	    for(int j=0;j<str.size();j++)
	    {
	        count++;
	    }
	   
	   while(digit>0)
	   {
	        int last_digit=digit%10;
	        sum=sum+pow(last_digit,count);
	        digit=digit/10;
	   }
	   if(sum==i)
	   {
	       ans.push_back(i);
	   }
	}
	if(ans.empty())ans.push_back(-1);
	for(int i=0;i<ans.size();i++)
	{
	    cout<<ans[i]<<" ";
	}

}