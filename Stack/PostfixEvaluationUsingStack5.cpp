#include <iostream>
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
    s.top = -1;
}

bool isEmpty()
{
    return (s.top == -1);
}

void Push(int x)
{
    if (s.top == 9) // max size = 10
    {
        cout << "Stack Overflow";
        exit(1);
    }
    s.top++;
    s.item[s.top] = x;
}

int Pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow";
        exit(1);
    }
    int x = s.item[s.top];
    s.top--;
    return x;
}

int Top()
{
    if (isEmpty())
    {
        cout << "Stack is empty!";
        exit(1);
    }
    return s.item[s.top];
}

int Evaluate(int x, int y, char symb)
{
    switch(symb)
    {
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/': return x/y;
        case '%': return x%y;
        default:
            cout << "Invalid Operator";
            exit(1);
    }
}
int main()
{
    char Postfix[20];
    cin >> Postfix;
    initialize();
    int i=0;
    while(Postfix[i]!='\0')
    {
        char symb = Postfix[i];
        i++;
        if(symb>='0' && symb<='9')
        Push(symb- '0');
        else
        {
            int y= Pop();
            int x= Pop();
            int z=Evaluate(x,y,symb);
            Push(z);
        }
    }
    cout<<"Evaluated value is :=>"<<Pop();
}