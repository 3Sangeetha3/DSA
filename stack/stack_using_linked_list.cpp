///stack using linked list
//there is no overflow condition using stack overflow

#include<iostream>
using namespace std;
struct link
{
   int data;
   link *next;
};
link *top = NULL;
link *node;
void push(int val)
{
   node = new link();
   node->data = val;
   node->next = top;
   top = node;
}
void pop()
{
   if(top == NULL)
   {
      cout<<"stack underflow"<<endl;
   }
   else
   {
      cout<<"Element popped is "<<top->data;
      link* temp=top;
      top=top->next;
      delete temp;
   }
}
void display()
{
   struct link *ptr;
   if(top == NULL)
   {
      cout<<"stack is empty!!!!"<<endl;
   }
   else{
      ptr = top;
      while(ptr!=NULL)
      {
         cout<<ptr->data<<endl;
         ptr = ptr->next;
      }
   }
}
int main()
{
   int ch, val;
   cout<<"1. push\n2. pop\n3. display\n4. exit\n";
   while(1)
   {
      cout<<"Enter your choice (1/2/3/4) : ";
      cin>>ch;
      switch(ch)
      {
         case 1:  cout<<"Enter the element you want to push into the stack : ";
                  cin>>val;
                  push(val);break;
         case 2:  pop();break;
         case 3:  display();break;
         case 4:  exit(0);break;
         default: cout<<"Enter the valid choice ";
      }
   }
   return 0;
}