/*
You are working on a project to implement a feature that displays the list of users in alphabetical order based on their names.



To achieve this, you decide to use the Quick-Sort algorithm to efficiently sort the names. The user inputs the number of users and then the name of each user. Once the names are collected, the program must apply the Quick Sort algorithm to sort and display the names in alphabetical order.



Note: This kind of question will be helpful in clearing Capgemini recruitment.

Input format :
The first line of input consists of an integer N, representing the number of users.

The following N lines consist of the names of the users (starting with uppercase letters).

Output format :
The output prints the sorted list of names in alphabetical order.

Code constraints :
N > 0

Sample test cases :
Input 1 :
5
Alice
Denver
Aadhil
Charlie
Zen
Output 1 :
Aadhil
Alice
Charlie
Denver
Zen
Input 2 :
6
Chandler
Monica
Ross
Joey
Rachel
Phoebe
Output 2 :
Chandler
Joey
Monica
Phoebe
Rachel
Ross
*/

#include<iostream>
using namespace std;

int partition(string a[],int low, int high)
{
    int i = low;
    int j = high;
    string pivot = a[low];
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
void quickSort(string a[],int low, int high)
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
    string a[x];
    cin.ignore();
    cout<<"Enter all the elements of the array : ";
    for(int i=0;i<x;i++)
    getline(cin,a[i]);
    
    quickSort(a,0,x-1);

    cout<<"Sorted array is : ";
    for(int i=0;i<x;i++)
    cout<<a[i]<<" ";
}