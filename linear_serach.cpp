//Linear Search

#include <iostream>
using namespace std;

int main()
{
    int a[20],n,no,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the Elements: \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number You want To Search: ";
    cin>>no;
    for(i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            cout<<"The Number Present in Location :"<< i+1<<"\n";
            cout<<"The Number present in index : "<<i;
            break;
        }
    }
    if(i==n)
    {
        cout << "The Number is not Present in the array";
    }

    return 0;
}
