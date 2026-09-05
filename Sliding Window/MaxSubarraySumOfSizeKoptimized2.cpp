#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxsum=INT_MIN;
    int maxIdx=0;
    int sum=0;
    for(int i=0;i<k;i++)
    {
       sum+=arr[i];
    }
    maxsum=sum;
    int i=1;
    int j=k;
    // Sliding Window
    while(j<n)
    {
        sum=sum+arr[j]-arr[i-1];
        if(maxsum<sum)
        {
            maxsum=sum;
            maxIdx=i;
        }
        i++;
        j++;
    } 
    cout<<maxsum<<endl;
    cout<<maxIdx;
}