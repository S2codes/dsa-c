#include <stdio.h>

// display arr elements or traversal
void display_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// insertion --- basic insertion
int indexInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        // {12, 23, 45, 56, 67, } i = 4 index = 3
        arr[i + 1] = arr[i];
        // arr[4 + 1] = arr[4];
        // {12, 23, 45, 56, , 67} i = 3 index = 3
        // arr[3 + 1] = arr[3];
        // {12, 23, 45, , 56, 67} i = 3 index = 3
    }
    arr[index] = element;
    return 1;
}

int main()
{
    // intialize and declare the array
    int myArr[100] = {12, 23, 45, 56, 67};
    int size = 5, element = 77, capacity = 100, index = 3;
    display_arr(myArr, size);
    int reuslt = indexInsertion(myArr, size, element, capacity, index);
    size += 1;
    if (reuslt != 1)
    {
        printf("Insertion Failed");
    }
    else
    {
        display_arr(myArr, size);
    }

    return 0;
}