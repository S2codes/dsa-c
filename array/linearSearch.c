#include <stdio.h>

// Linear Search
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

// binary Search
int binarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = (size - 1);


    // start searching
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        // end searching
    }
    return -1;
}

int main()
{
    // unsorted array for linear search
    // int ar[] = {12, 3, 4, 5, 67, 7, 8, 10};

    int ar[] = {3, 4, 5, 7, 8, 10, 12, 67};
    int size = sizeof(ar) / sizeof(int);
    int element = 67;
    // int result = linearSearch(ar, size, element);
    int result = binarySearch(ar, size, element);

    printf("Element Found at position : %d ", result);

    return 0;
}