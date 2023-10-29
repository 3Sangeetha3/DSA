#include<iostream>
using namespace std;
void fib(int n)
{
    int a=0,b=1,c;
    if(n==1)
    {
        cout<<a<<" ";
    }
    else if(n==2)
    {
        cout<<a<<" "<<b<<" ";
    }
    else
    {
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<n;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    fib(n);
}