#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of N:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        char x='A';
        for(j=1;j<=i;j++)
        {
            cout<<x;
            x++;
        }
        x--;
        x--;
        for(j=1;j<=i-1;j++)
        {
            cout<<x;
            x--;
        }
        cout<<endl;
    }
}

