#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// NORMAOL BUBBLE SORT
void bubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // For Number of pass
    {
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

// ADAPTIVE BUBBLE SORT
void bubbleSortAddaptive(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For Number of pass
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int Arr[] = {8, 1, 56, 45, 23, 5};
    // int Arr[] = {1,2,3,4,5,6};
    int Arr[] = {1,2,3,6,4,6};
    int n = 6;
    printArray(Arr, n);
    // bubbleSort(Arr, n);
    bubbleSortAddaptive(Arr, n);
    printArray(Arr, n);
    return 0;
}