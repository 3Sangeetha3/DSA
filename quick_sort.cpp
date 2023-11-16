#include<iostream>
using namespace std;
int x,i,j;
int partition(int a[],int low, int high)
{
    int i = low;
    int j = high;
    int pivot = a[low];
    while(i<j)
    {
        do{i++;}while(a[i]>pivot);
        do{j--;}while(a[j]<pivot);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
}
void quickSort(int a[],int low, int high)
{
    if(low<high)
    {
        int j = partition(a,low,high);
        quickSort(a,low,j);
        quickSort(a,j+1,high);
    }
}
int main()
{
    int x;
    cout<<"Enter the range of the array : ";
    cin>>x;
    int n= x+1;
    int a[n];
    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<x;i++)
    cin>>a[i];
    a[x]=999;
    
    quickSort(a,0,n-1);

    cout<<"Sorted array is : ";
    for(int i=0;i<x;i++)
    cout<<a[i]<<" ";
}