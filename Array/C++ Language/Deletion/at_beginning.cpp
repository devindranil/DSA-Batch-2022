//write a c++ program to delete the number at the beginning of an array
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
        cout << "array before deletion: ";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        cout << "The array after deletion: ";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
