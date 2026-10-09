#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter value of N:";
    cin>>n;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
