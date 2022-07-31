#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        // if key is bigger then we search the right part of the array
        if (key >= arr[mid])
        {
            start = mid + 1;
        }
        // if key is less then we search the left part of the array
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};

    int evenindex = binarySearch(even, 6, 8);

    if (evenindex == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d", evenindex);
    }
    

    
}