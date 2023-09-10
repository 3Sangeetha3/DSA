//Insert a number in perticular position if the array.

#include <iostream>
using namespace std;

int main()
{
    int a[10],n,no,po,i;
    cout<<"enter the range of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter the element u want to insert: ";
    cin>>no;
    cout<<"enter the position: ";
    cin>>po;
    for(i=n-1;i>=po;i--)
    a[i+1]=a[i];
    a[po]=no;
    cout<<"After insertion the array elements are : ";
    for(i=0;i<=n;i++)
    {
        cout<<a[i];
    }
    
    return 0;
}
