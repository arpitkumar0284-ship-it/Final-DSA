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

int main()
{
    initialize();
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n == 0)
   {
       cout << "Hexadecimal: 0";
       return 0;
   }

    while (n != 0)
    {
        int r = n % 16;
        Push(r);
        n = n / 16;
    }

    cout << "Hexadecimal: ";
    while (!isEmpty())
    {
        int x = Top();
        Pop();
        if (x < 10)
            cout << x;
        else
        
         cout<< char('A' + (x - 10));
    }
    cout << endl;

    return 0;
}
