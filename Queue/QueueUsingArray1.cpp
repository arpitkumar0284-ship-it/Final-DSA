#include<iostream>
#include<stdlib.h>
using namespace std;
struct Queue
{
    int front;
    int rear;
    char arr[10];
};
struct Queue Q;
void Initialize()
{
    Q.front = 0;
    Q.rear = -1;
}
bool IsEmpty()
{
    if(Q.rear-Q.front+1 == 0)
       return true;
    else
     return false;
}

void EnQueue(char x)
{
    if(Q.rear==9)
    {
        cout<<"Queue overflow";
        exit(1);
    }
    else
    {
        Q.rear++;
        Q.arr[Q.rear]=x;
    }
}

char DeQueue()
{
    if(IsEmpty())
    {
        cout<<"Queue Underflows";
        exit(1);
    }
    else
    {
        char x;
        x=Q.arr[Q.front];
        Q.front++;
        return x;
    }
}
int main()
{
    Initialize();
    EnQueue('A');
    EnQueue('B');
    EnQueue('C');
    EnQueue('D');
    EnQueue('E');
    EnQueue('F');
    EnQueue('G');
    char x= DeQueue();
    cout<<"deleted item is :=>"<<x<<"\n";
    x= DeQueue();
    cout<<"deleted item is :=>"<<x<<"\n";
    x= DeQueue();
    cout<<"deleted item is :=>"<<x<<"\n";
    return 0;
}