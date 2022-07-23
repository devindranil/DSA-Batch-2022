//write a c++ program to insert a number at a specific position in an array.
#include <iostream>
using namespace std;
int main()
{
	int a[10], n, i, j, k;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	cout << "Enter the elements of the array: ";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the position at which you want to insert: ";
	cin >> k;
	cout << "Enter the number to be inserted: ";
	cin >> j;
	for (i = n; i >= k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k-1] = j;
	cout << "The new array is: ";
	for (i = 0; i < n + 1; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
