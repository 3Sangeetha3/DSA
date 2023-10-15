/*
Imagine you are a teacher preparing the final grades for your class. 
You have a list of your students' GPAs, and you want to see who performed the best in the class. 
You decide to use this program to quickly sort and display the GPAs in descending order to identify the top students based on their GPAs.
Your task is to implement a recursive function using the Quick-Sort algorithm. 
The program should prompt the user for the number of students, input the GPA, and sort the same in descending order.

Input format :
The first line of input consists of an integer N, representing the number of students.

The second line consists of N floating point numbers, representing the GPA of the students.

Output format :
The output prints the sorted GPAs in descending order, from the highest GPA to the lowest, rounded off to one decimal place.

Code constraints :
N > 0

Sample test cases :
Input 1 :
3
3.6 4.4 2.9 
Output 1 :
4.4 3.6 2.9 
Input 2 :
6
1.2 4.9 3.5 2.7 5.0 3.1
Output 2 :
5.0 4.9 3.5 3.1 2.7 1.2 
*/

#include<iostream>
#include<iomanip>
using namespace std;

int partition(float a[],int low, int high)
{
    int i = low;
    int j= high;
    float pivot = a[low];
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
void quickSort(float a[],int low, int high)
{
    if(low<high)
    {
        int j= partition(a,low,high);
        quickSort(a,low,j);
        quickSort(a,j+1,high);
    }
}
int main()
{
    int x;
    cin>>x;
    int n = x+1;
    float a[n];
    for(int i=0;i<x;i++)
    cin>>a[i];
    a[x]=99.9;
    quickSort(a,0,n-1);
    for(int i=0;i<x;i++)
    cout<<fixed<<setprecision(1)<<a[i]<<" ";
    return 0;

}