#include<iostream>
#include<vector>
using namespace std;
int main(){
int m,n;
cout<<"enter the size of first array:";
cin>>m;
cout<<"enter the size of second array";
cin>>n;
vector<int>A(m);
vector<int>B(n);
vector<int>C(m+n);
for(int i=0;i<m;i++)
{
   cout<<"Enter the elements in first array:";
   cin>>A[i];
}  

for(int j=0;j<n;j++)
{
    cout<<"Enter the elements in second array:";
   cin>>B[j];
}
int i=0,j=0,k=0;



  while( i<m &&  j<n)
 {
    if(A[i]<B[j])
    {
       C[k]=A[i];
       i++;
       k++;
    }
    else if(A[i]>B[j])
    {
        C[k]=B[j];
        j=j+1;
        k=k+1;
    }
    else
    {
        C[k]=A[i];
        i++;
        j++;
        k++;
    }
   }

 while(i<m)
 {
    C[k]=A[i];
    k=k+1;
    i=i+1;
 }
 while(j<n)
 {
    C[k]=B[j];
    k=k+1;
    j=j+1;
 }

for(int k=0;k<C.size();k++)
{
    cout<<C[k]<<" ";
}
}

