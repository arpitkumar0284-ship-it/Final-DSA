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
int evenprod=1;
int oddprod=1;
for(int i=0;i<=n-1;i++)
{
 if(v[i]%2==0)
 {
    evenprod=evenprod*v[i];
 }
 else
 {
    oddprod=oddprod*v[i];
 }
}
int sum=oddprod + evenprod;
  cout<<"The sum of product of odd and even elements are:"<< sum <<endl;
  return 0;
}
