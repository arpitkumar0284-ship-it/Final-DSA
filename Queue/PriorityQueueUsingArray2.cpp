#include<iostream>
using namespace std;
int N;
void PQInsertion(int A[],int x)
{    
     if(N==10)
    {
        cout<<"Priority Queue Overflow";
        return;
    }
    int i=0;
    while(i<N && x>=A[i])
    i++;
    for(int j=N-1;j>=i;j--)
    {
        A[j+1]=A[j];
    }
     A[i]=x;
     N=N+1;
}
int PQDeletion(int A[])
{
    int x=A[0];
    for(int j=1;j<N;j++)
    A[j-1]=A[j];
    N=N-1;
    cout<<endl;
    return x;
}
void traverse(int A[])
{
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<",";
    }
}
int main()
{
    int A[10];
    N=5;
    A[0]=4;
    A[1]=6;
    A[2]=8;
    A[3]=9;
    A[4]=12;
    PQInsertion(A,2);
    PQInsertion(A,5);
    traverse(A);
    int x=PQDeletion(A);
    cout<<"Deleted element is :=>"<<x<<"\n";
    traverse(A);
}