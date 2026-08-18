#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
    int item[10];
    int top;
};
stack s;
void initialize()
{
    s.top=-1;
}

bool isEmpty()
{
    if(s.top==-1)
        return true;
    else
       return false;
}
void Push(int x)
{
    if(s.top==9)
    {
        cout<<"stack overflow";
        exit(1);
    }
    else{
        s.top++;
        s.item[s.top]=x;
    }
}
int Pop()
{
    if(isEmpty())
    {
        cout<<"Stack Underflow";
        exit(1);
    }
    else
    {
        int x=s.item[s.top];
        s.top--;
        return x;
    }
}
int Top()
{   if (isEmpty()) {
        cout << "Stack is empty!";
        exit(1);
    }
    return s.item[s.top];
}

int main()
{
    initialize();
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n==0)
   {
       cout<<"Binary:0";
       return 0;
    }
    while(n!=0)
    {
        int r=n%2;
        Push(r);
        n=n/2;
    }

    cout<<"Binary:";
    while(!isEmpty())
    {
        cout<< Pop();
    }
    cout << endl;
    return 0;
}