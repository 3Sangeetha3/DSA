///write a program to convert and an infix to postfix using stack.

#include<iostream>
#include<string.h>
using namespace std;

char infix[50], stack[50], postfix[50];
int pos=0,top = -1;
char symbol,temp;
void push(char val)
{
    top = top + 1;
    stack[top]=val;
}
char pop()
{
    temp = stack[top];
    top = top-1;
    return temp;
}
char precedence(char val)
{
    int p;
    switch(val)
    {
        case '^': p = 3;break;
        case '*': case '/': p = 2;break;
        case '+': case '-': p = 1;break;
        case '(': case ')': p = 0;break;
        case '#': p = -1;break;
    }
    return p;
}
void infixtopostfix(char infix[])
{
    push('#');
    int len = strlen(infix);
    for(int i=0;i<len;i++)
    {
        symbol = infix[i];
        switch(symbol)
        {
            case '(':push(symbol);break;
            case ')':temp = pop();
            while(temp != '(')
            {
                postfix[pos++] = temp;
                temp = pop();
            }
            break;
            case '^': case '*': case '/': case '+': case '-':
            while(precedence(stack[top])>=precedence(symbol))
            {
                temp = pop();
                postfix[pos++] = temp;
            }
            push(symbol);
            break;
            default:
				postfix[pos++]=symbol;
				break;

        }
    }
    while(top>0)
        {
            temp = pop();
            postfix[pos++] = temp;
        }
}
int main()
{
    cout<<"Enter the infix expression : ";
    cin>>infix;
    infixtopostfix(infix);
    cout<<"Infix notation is : "<<infix<<endl;
    cout<<"Postfix notation is : "<<postfix<<endl;
    return 0;
}