#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> end_zeros;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	int count_nz=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            count_nz++;
            end_zeros.push_back(a[i]);
        }
    }
    int count_z=n-end_zeros.size();
    for(int i=0;i<count_z;i++)
    {
        end_zeros.push_back(0);
    }
    for(int i=0;i<end_zeros.size();i++)
    {
        cout<<end_zeros[i]<<" ";
    }
}
