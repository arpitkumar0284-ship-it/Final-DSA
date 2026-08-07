#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int*ptr;
    int n;
    cin>>n;
   ptr = (int*)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)
      cin>>*(ptr+i);
   for(int i=0;i<n;i++)
      cout<<*(ptr+i)<<" ";
      free(ptr);   // Memory free
      return 0;

}