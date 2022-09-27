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

// Deletion
int indexDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main()
{
    // intialize and declare the array
    int myArr[100] = {12, 23, 45, 56, 67};
    int size = 5, index = 4;
    display_arr(myArr, size);
    indexDeletion(myArr, size, index);
    size -= 1;
    display_arr(myArr, size);

    return 0;
}