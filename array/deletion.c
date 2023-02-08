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
    // {12, 23, 45, 56, 67} 5 3;
    for (int i = index; i < size - 1; i++)
    // i = 3 ; 3 < 4
    {
        arr[i] = arr[i + 1];
        // arr[3] = arr[3 + 1]; => arr[67]
        // i = 5
        // arr[4] = arr[3 + 1]; => arr[67]
    }
    return 1;
}

int main()
{
    // intialize and declare the array
    int myArr[100] = {12, 23, 45, 56, 67};
    int size = 5, index = 3;
    display_arr(myArr, size);
    indexDeletion(myArr, size, index);
    size -= 1;
    display_arr(myArr, size);

    return 0;
}