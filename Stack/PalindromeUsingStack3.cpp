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
    if(s.top==-1)
        return true;
    else
       return false;
}
void Push(char c)
{
    if(s.top==49)
    {
        cout<<"stack overflow";
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
{   if (isEmpty()) {
        cout << "Stack is empty!";
        exit(1);
    }
    return s.str[s.top];
}

int main()
{
    initialize();
    char str[50];
    cout<<"Enter a string:";
    cin>>str;
    int i=0;
    while(str[i]!='\0')
    {
        Push(str[i]);
        i++;
    }

    
    bool flag = true;
  int j = 0;   // string ke starting se compare karne ke liye
while(!isEmpty())
{
    if(str[j] == Pop())   // yaha Pop() call karna hai, s.top() nahi
        j++;
    else 
    {
        flag = false;
        break;
    }
}

if(flag)
    cout << "Palindrome";
else
    cout << "Not palindrome";

    return 0;
}