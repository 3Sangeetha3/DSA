#include<iostream>
using namespace std;

void maxheap(int a[],int k, int n)
{
    int val = a[k];
    int j = 2*k+1;
    while(j<n)
    {
        if(a[j+1] < a[j])
        j=j+1;
        if(val < a[j])
        break;
        else{
            a[(j-1)/2] = a[j];
            j = j*2+1;
        }
    }
    a[(j-1)/2] = val;
    return;
}
void build_heap(int a[], int n)
{
    int k;
    for( k = (n/2) -1 ;k>=0;k--)
    {
        maxheap(a,k,n);
    }
}
int main()
{
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int a[n];
    cout<<"Enter all the elements : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    build_heap(a,n);
    cout<<"Min heap is : ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
