#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int max_profit=INT_MIN;
	int profit=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(a[j]>a[i])
	        {
	            profit=a[j]-a[i];
	        }
	        max_profit=max(profit,max_profit);
	    }
	}
	cout<<max_profit;
}
