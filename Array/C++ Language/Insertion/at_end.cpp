// write a c++ program to insert a number at the end of an array
#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if (n > 10)
    {
        cout << "Overflow";
    }
    else
    {
        cout << "Enter the elements of the array: ";
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Enter the number to be inserted: ";
        cin >> k;
        for (i = n; i <= n; i++)
        {
            a[i] = k;
        }
        
        cout << "The array after insertion: ";
        for (i = 0; i < n + 1; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}