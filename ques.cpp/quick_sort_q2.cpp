/*
You are working as a programmer at a sports academy, and the academy holds various sports competitions regularly. As part of the academy's system, you need to sort the scores of the participants in descending order using the Quick-Sort algorithm.



Write a program that takes the scores of N participants as input and uses the QuickSort algorithm to sort and display the scores in descending order.

Input format :
The first line of input consists of an integer N, representing the number of participants.

The second line consists of N space-separated integers, representing the scores of the participants.

Output format :
The output prints the scores sorted in descending order.

Code constraints :
N > 0

1 <= scores <= 100

Sample test cases :
Input 1 :
5
78 54 96 32 53
Output 1 :
96 78 54 53 32 
Input 2 :
4
53 65 84 36
Output 2 :
84 65 53 36 */

// You are using GCC
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    
    //Type your code here
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int partition(int arr[], int low, int high) {
    //Type your code here
    int pivot = arr[low];
    int i = low;
    int j = high + 1;
    while(i<j)
    {
        do{i++;}while(arr[i]>pivot);
        do{j--;}while(arr[j]<pivot);
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    //Type your code here
    if(low<high)
    {
        int j = partition(arr,low,high);
        quickSort(arr,low,j);
        quickSort(arr,j+1,high);
    }
    
}

int main() {
    int n;
    cin >> n;

    int *scores = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    quickSort(scores, 0, n - 1);
    printArray(scores, n);

    delete[] scores;
    return 0;
}

