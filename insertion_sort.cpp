//wap to sort an array usiung insertion sort

#include <iostream>
using namespace std;
int main()
{
    int n, i ,j, temp;
    cout<<"Enter the range : ";
    cin>>n;
    int a[n];
    cout<<"Enter all the elements : ";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        temp =a[i];
        j = i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    cout<<"sorted array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}