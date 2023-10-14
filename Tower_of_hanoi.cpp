#include<iostream>
using namespace std;
int moves = 0;
void Hanoi(int n, char source, char aux, char destination)
{
    moves++;
    if(n==1)
    {
        cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
    }
    else{
        Hanoi(n-1,source,destination,aux);
        cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
        Hanoi(n-1,aux,source,destination);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of the disks : ";
    cin>>n;
    Hanoi(n,'A','B','C');
    cout<<"It tooks "<<moves<<" moves. "<<endl;
    return 0;
}