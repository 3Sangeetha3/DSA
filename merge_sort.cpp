#include<iostream>
using namespace std;
void mergeSort(int a[],int low, int high);
void merge(int a[], int low, int mid, int high);
void mergeSort(int a[],int low, int high)
{
    if(low<high)
    {
        int mid = (high + low)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low, int mid, int high)
{
    int i,j,k=0;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1],R[n2];
    for(int i= low;i<=mid;i++)
    {
        L[k++] = a[i];
    }
    k=0;
    for(int i=mid+1;i<=high;i++)
    {
        R[k++] = a[i];
    }
    i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k++]=L[i];
            i++;
        }
        else
        {
            a[k++]=R[j];
            j++;
        }
    }
    while(i<n1)
    {
        a[k++]=L[i];
        i++;
    }
    while(j<n2)
    {
        a[k++]=R[j];
        j++;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter all the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}