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
	vector<int> v;
	for(int i=0;i<n;i++)
	{
	    v.push_back(a[i]);
	}
	sort(a.begin(),a.end());
	int i=0;
	int j=0;
	int random_arrange=0;
	while(i<a.size() && j<v.size())
	{
	    if(a[i]!=v[j])
	    {
	        random_arrange++;
	    }
	    i++;
	    j++;
	}
	cout<<random_arrange;
}
