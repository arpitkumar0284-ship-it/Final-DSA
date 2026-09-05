#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    for(int i=0;i<=n-k;i++)  //total no of ops=n-k+1
    {   int sum=0;
        for(int j=i;j<i+k;j++)  // k times
        {
            sum+=arr[j];
        }
        maxsum=max(maxsum,sum);
    }
    // tno = (n-k+1)*k
    // Time Complexity=O(k*n)
    cout<<maxsum;

}