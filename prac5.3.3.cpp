#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter value of N:";
    cin>>n;

    for(int i=1;i<=5;i++)
    {
        char x='A';
        for(char j=1;j<=i;j++)

        {
            cout<<x;
            x++;
        }
        cout<<endl;
    }
    return 0;
}


