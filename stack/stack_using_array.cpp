//stack push pop operation
#include <iostream>
using namespace std;
void push();
int pop();
void display();  
int top=-1;
const int maxSize=10;
int stack[maxSize];
int main()
{
    cout<<"1.push  2.pop  3.display 4.exit "<<endl;
    int ch;
    while(1)
    {
        cout<<"Enter the option(1/2/3/4) ";
        cin>>ch;
        switch(ch)
        {
            case 1: push(); break;
            case 2: pop();  break;
            case 3: display();break;
            case 4: exit(0);
        }
    }
    return 0;
}
void push()
{
    int item;
    if(top==maxSize)
    {
        cout<<"overflow condition "<<endl;
    }
    else
    {
        cout<<"Enter the element ";
        cin>>item;
        top=top+1;
        stack[top]=item;
        cout<<"Element pushed in to the stack is "<<stack[top]<<endl;
    }
}
int pop()
{
    int item;
    if(top==-1)
    {
        cout<<"Underflow condition "<<endl;
    }
    else
    {
        item=stack[top];
        cout<<"Element popped from the stack is : "<<item<<endl;
        top=top-1;
    }
    return item;
}
void display()
{
    if(top==-1)
    {
        cout<<"Stack is empty "<<endl;
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i];
        }
    }
    cout<<endl;
}



