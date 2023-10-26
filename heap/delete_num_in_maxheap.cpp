//wap to delete a num from the max-heap

#include<iostream>
using namespace std;

void maxheap(int a[],int k, int n)
{
    int val = a[k];
    int j = 2*k+1;
    while(j<n)
    {
        if(a[j+1] > a[j])
            j=j+1;
        if(val > a[j])
            break;
        else{
            a[(j-1)/2]=a[j];
            j=2*j+1;
        }
    }
    a[(j-1)/2] = val;
        return;
}
void build_heap(int a[], int n)
{
    int k;
    for( k = (n/2)-1 ;k>=0;k--)
    {
        maxheap(a,k,n);
    }
}
void heapify(int a[], int n, int index)
{
    int largeindex = index;
    int L = 2*index+1;
    int R = 2*index+2;
    if(L<n && a[L]>a[largeindex])
        largeindex = L;
    if(R<n && a[R]>a[largeindex])
        largeindex = R;
    if(index != largeindex)
    {
        swap(a[index],a[largeindex]);
        heapify(a,n,largeindex);
    }
}
void deleteheap(int a[], int n, int no)
{
    //linear search
    int index;
    for(int i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            index = i;
            break;
        }
    }
    a[index] =a[n-1];
    heapify(a,n,index);

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
    cout<<"Max heap is : ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    //deleting a num from the max-heap
    int no;
    cout<<"\nEnter the number u want to delete: ";
    cin>>no;
    deleteheap(a,n,no);             //n is range
    cout<<"Max heap after deleting the number is : ";
    for(int i=0;i<n-1;i++)
    cout<<a[i]<<" ";
    return 0;
}
