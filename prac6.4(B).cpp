
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int a[100], b[100], c[200];

    cout << "Enter size of First Array: ";
    cin >> n;

    cout << "Enter elements of First Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter size of Second Array: ";
    cin >> m;

    cout << "Enter elements of Second Sorted Array: ";

    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "\nFirst Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nSecond Array: ";

    for(int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    cout << "\nMerged Array: ";

    for(int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}
