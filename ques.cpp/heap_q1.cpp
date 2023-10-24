/*
You have a passion for T20 cricket matches and are eager to monitor the performance of bowlers to determine this year's recipient of the purple cap. To streamline this process, you wish to create an application that stores the data in a heap, specifically a max heap. This will enable you to easily identify the bowler with the highest number of wickets.



Write a program that takes in integers representing the wickets taken by different bowlers and generates a max heap representation of the same.



Note: This kind of question will be helpful in clearing TCS recruitment.

Input format :
The first line of input consists of an integer n, representing the total number of bowlers.

The second line of input consists of n space-separated integer values representing the number of wickets taken by the bowlers.

Output format :
The output displays the space-separated integer values of the max-heap specifying the total number of wickets taken by the bowler.



Refer to the sample output for exact format specifications.

Code constraints :
The test cases will fall under the following constraints:

1<=n<=5

1<=number of wickets <=10

Sample test cases :
Input 1 :
5
5 4 3 2 1
Output 1 :
5 4 3 2 1 
*/

#include<iostream>
using namespace std;
const int max_size=10;
int a[max_size];
void maxheap(int a[],int k, int n)
{
    int val = a[k];
    int j = 2*k;
    while(j<=n)
    {
        if(j<n && a[j+1]>a[j])
        j = j+1;
        if(j<n && val>a[j])
        break;
        else if(val<a[j])
        {
            a[j/2] = a[j];
            j=j*2;
        }
        a[j/2] = val;
    }
}
void build_heap(int a[], int n)
{
    int k;
    for(k=n/2;k>=1;k--)
    maxheap(a,k,n);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    build_heap(a,n);
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    return 0;
}