#include<iostream>
using namespace std;
#define SIZE 5

int stack[SIZE];
int top= -1;

void push(int val)
{
    if(top== SIZE-1)
    cout << "stack overflow\n";
    else
    stack[++top]= val;
}

void pop()
{
    if(top==-1)
    cout << "stack underflow\n";
    else
    cout<<"popped:"<< stack[top--] << endl;
}

void peek()
{
    if(top==-1)
    cout << "stack is empty\n";
    else
    cout << "top element:"<< stack[top] << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();
    return 0;
}




