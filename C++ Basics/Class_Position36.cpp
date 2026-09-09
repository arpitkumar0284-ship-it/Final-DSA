#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> rank;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{   int count=1;
	    int max=a[i];
	    for(int j=0;j<n;j++)
	    {
	        if(a[j]>max)
	        {
	            count++;
	        }
	    }
	     rank.push_back(count);
	}
	for(int i=0;i<rank.size();i++)
	{
	    cout<<rank[i]<<" ";
	}
}
