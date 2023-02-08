#include<stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insetionSort(int * A, int n){
    int key, j;
    // {1, 5, 9, 56, 23, 11}
    // Loop for each passes 
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i - 1;
        // Loop For Each pass 
        while (j >= 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1]= key;
        
    }
    
}

int main()
{
    
    int Arr[] = {1, 5, 9, 56, 23, 9};
    int n = 6;
    printArray(Arr, n);
    insetionSort(Arr, n);
    printArray(Arr, n);

    return 0;
}