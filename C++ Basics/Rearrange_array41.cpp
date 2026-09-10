#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a.begin(),a.end());
	vector<int> v;
	int i=0;
	int j=a.size()-1;
	while(i<j)
	{
	    v.push_back(a[i]);
	    v.push_back(a[j]);
	    i++;
	    j--;
	}
	if(a.size()%2!=0)
	{
	    v.push_back(a[i]);
	}
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i]<<" ";
	}
}
