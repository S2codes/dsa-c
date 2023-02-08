#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        
        
        
        
    } while (i < j);
    temp = A[low];
    A[low] =  A[j];
    A[j] = temp;
    return j;
    


}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex-1);
        quickSort(A, partitionIndex+1, high);
    }
}

int main()
{
    int Arr[] = {5, 6, 2, 8, 9, 7};
    int n = 6;
    // int Arr[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    // int n = 9;
    printArray(Arr, n);
    quickSort(Arr, 0, n - 1);
    printArray(Arr, n);

    return 0;
}