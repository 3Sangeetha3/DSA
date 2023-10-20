//MAX HEAP

#include<iostream>
using namespace std;

void maxheap(int a[], int k, int n)
{
    int val = a[k];
    int j = 2*k;
    while(j <= n)
    {
        if(a[j+1] > a[j])
           j=j+1;
        if(val > a[j])
           break;
        else if(val < a[j])
        {
            a[j/2] = a[j];
            j = 2*j;
        }
     }
     a[j/2] = val;
     return;

}


void build_heap(int *a, int n)
{
    int k;
    for(k = n/2; k>=1; k--)
    {
        maxheap(a, k, n);
    }
}

int main()
{
    int n, a[30];
    cout<<"Enter Range: ";
    cin>>n;
    cout<<"Enter all the elements: ";
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    //build a heap......
    build_heap(a, n);
    //display........
    cout<<endl<<"Max Heap is: ";
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
}