/*
You've received a secret message encoded as an array of characters. Unfortunately, the characters are all jumbled up. 



Your mission is to write a program that can unscramble the message by sorting the characters in ascending order using the Quick-Sort algorithm.

Input format :
The first line of input consists of an integer N, representing the number of characters.

The second line consists of N space-separated characters.

Output format :
The output prints the sorted characters in ascending order.

Code constraints :
N > 0

Sample test cases :
Input 1 :
5
b n h u j
Output 1 :
b h j n u 
Input 2 :
6
w e r h j k
Output 2 :
e h j k r w 
*/

#include<iostream>
using namespace std;
int partition(char a[],int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        do{i++;}while(a[i]<pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
}
void quickSort(char a[],int low, int high)
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
    cin>>x;
    int n = x+1;
    char a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    quickSort(a,0,n-1);
    for(int i=0;i<x;i++)
    cout<<a[i]<<" ";
}