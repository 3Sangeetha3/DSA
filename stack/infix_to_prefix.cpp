///a program to convert an infix notation to prefix using stack.
#include<iostream>
#include<string.h>
using namespace std;

char infix[50], stack[50], prefix[50];
char symbol, temp;
int pos = 0, top = -1;

void push(char val)
{
    top = top + 1;
    stack[top] = val;
}
char pop()
{
    temp = stack[top];
    top = top -1;
    return temp;
}
int precedence(char val)
{
    int p;
    switch(val)
    {
        case '^': p = 3; break;
        case '*': case '/': p = 2; break;
        case '+': case '-': p = 1; break;
        case '(': case ')': p = 0; break;
        case '#': p = -1;break;
    }
    return p;
}
void infixtoprefix(char infix[])
{
    push('#');
    int len = strlen(infix);
    for(int i=len-1;i>=0;i--)
    {
        symbol = infix[i];
        switch(symbol)
        {
            case ')':   push(symbol);break;         //change
            case '(':   temp = pop();              //change
                        while(temp != ')')
                        {
                            prefix[pos++]=temp;
                            temp = pop();
                        }
                        break;
            case '^':
            case '*':
            case '/':
            case '+':
            case '-':
                        while(precedence(stack[top])>precedence(symbol))    //change
                        {
                            temp = pop();
                            prefix[pos++] = temp;
                        }
                        push(symbol);
                        break;
            default:    prefix[pos++] = symbol; break;
        }
    }
    while(top > 0)
    {
        temp = pop();
        prefix[pos++] = temp;
    }
}
int main()
{
    cout << "Enter the Infix expression: ";
    cin>>infix;
    infixtoprefix(infix);
    cout<<"Infix notation is : "<<infix<<endl;
    cout<<"Prefix notation is : ";
    for(int i = strlen(prefix)-1;i>=0;i--)
    cout<<prefix[i];
    return 0;
}