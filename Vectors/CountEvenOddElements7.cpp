#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"enter the size of array:";
cin>>n;
vector<int>v(n);
for(int i=0;i<=n-1;i++)
{
    cout<<"Enter the array element no "<<i+1<<":";
    cin>>v[i];
}
int evencount=0;
int oddcount=0;
for(int i=0;i<=n-1;i++)
{
 if(v[i]%2==0)
 {
    evencount++;
 }
 else
 {
    oddcount++;
 }
}
  cout<<"The number of even elements are:"<<evencount<<endl;
  cout<<"The number of odd elements are:"<<oddcount<<endl;
  return 0;
}