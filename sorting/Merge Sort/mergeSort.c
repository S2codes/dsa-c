// MERGE SORT 
// two sorted array Merge into one sorted array 

#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void merge(int *A, int *B, int *C, int size_A, int size_B)
{
    int i, j, k;
    i = j = k = 0;

    while (i < size_A && j < size_B)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++, k++;
        }
        else
        {
            C[k] = B[j];
            j++, k++;
        }
    }

    while (i < size_A)
    {
        C[k] = A[i];
        i++, k++;
    }

    while (j < size_B)
    {
        C[k] = B[j];
        j++, k++;
    }
}

int main()
{

    int Arr1[] = {4, 8, 12, 23, 33};
    int size_Arr1 = 5;
    int Arr2[] = {7, 15, 21, 27, 37, 40};
    int size_Arr2 = 6;
    int sorted_arr[size_Arr1 + size_Arr2];

    merge(Arr1, Arr2, sorted_arr, size_Arr1, size_Arr2);

    printArray(Arr1, size_Arr1);
    printArray(Arr2, size_Arr2);
    printArray(sorted_arr, 11);

    return 0;
}