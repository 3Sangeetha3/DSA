//Selection sort
#include<iostream>
using namespace std;
int main()
{
    int a[30],i,j,n,loc,temp,small;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(small>a[j])
            {
                small=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
