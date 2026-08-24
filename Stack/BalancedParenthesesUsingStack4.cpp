#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack
{
    char str[50];
    int top;
};

stack s;

void initialize()
{
    s.top=-1;
}

bool isEmpty()
{
    return (s.top==-1);
}

void Push(char c)
{
    if(s.top==49)
    {
        cout<<"Stack Overflow";
        exit(1);
    }
    else{
        s.top++;
        s.str[s.top]=c;
    }
}

char Pop()
{
    if(isEmpty())
    {
        cout<<"Stack Underflow";
        exit(1);
    }
    else
    {
        char c=s.str[s.top];
        s.top--;
        return c;
    }
}

char Top()
{
    if (isEmpty()) {
        cout << "Stack is empty!";
        exit(1);
    }
    return s.str[s.top];
}

// Minor addition: check if opening and closing brackets match
bool isMatchingPair(char open, char close)
{
    return (open=='(' && close==')') ||
           (open=='[' && close==']') ||
           (open=='{' && close=='}');
}

int main()
{
    char Exp[50];
    cout<<"Enter expression: ";
    cin>> Exp;

    initialize();
    int i=0, flag=0;

    while (Exp[i]!='\0')
    {
        char c= Exp[i];

        if(c=='(' || c=='[' || c=='{')
        {
            Push(c);
        }
        else if (c== ')' || c==']'|| c=='}')
        {
            if(isEmpty() || !isMatchingPair(Pop(), c)) // minor fix
            {
                flag=1;
                break;
            }
        }
        else
        {
            // optional: ignore other characters
        }

        i++;
    }

    // Check if stack is empty at the end
    if(!isEmpty()) flag=1;

    if(flag==0)
        cout<<"Expression is balanced\n";
    else
        cout<<"Expression is not balanced\n";

    return 0;
}