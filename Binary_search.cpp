//Binary search.
#include <iostream>  
using namespace std;  
int main ()  
{  
    int a[100],n,low, mid, high, i, num;  
    cout << " Define the size of the array: ";  
    cin >> n; 
    cout << " Enter the values in sorted array either ascending or descending order: " << endl;  
    for (i = 0; i < n; i++)  
    {  
        cout << " a [" << i << "] = ";  
        cin >> a[i];  
    }  
    low = 0;  
    high = n - 1; 
    cout << " Enter a value to be searched from sorted array: " << endl;  
    cin >> num;  
    while ( low <= high)  
    {  
        mid = ( low + high ) / 2;  
        if (a[mid] == num)  
        {  
            cout << " Element is found at location : " << (mid + 1);  
            exit (0); // or break;  
        }  
        else if ( num > a[mid])  
        {  
            low = mid + 1; 
        }  
        else if ( num < a[mid])  
        {  
            high = mid - 1; 
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
}   
