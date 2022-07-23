// write a c++ program to insert a number at the beginning of an array
#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, j;
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
        int x;
        cin >> x;
        cout << "array before insertion: ";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
            
        }
        for (i = n - 1; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[0] = x;
        cout << "The array after insertion: ";
        for (i = 0; i < n + 1; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
