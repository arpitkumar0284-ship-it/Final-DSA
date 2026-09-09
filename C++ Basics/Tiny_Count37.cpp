#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> smaller_count;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{   int count=0;
	    int max=a[i];
	    for(int j=i+1;j<n;j++)
	    {
	        if(a[j]<max)
	        {
	            count++;
	        }
	    }
	     smaller_count.push_back(count);
	}
	for(int i=0;i<smaller_count.size();i++)
	{
	    cout<<smaller_count[i]<<" ";
	}
}
