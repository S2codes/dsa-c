#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selctionSort(int *A, int n)
{
    //   0,  1,  2, 3,  4, 5
    // {12, 54, 65, 5, 23, 7}
    // length  = 6

    int indexOfMIn, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMIn = i;
        // indexOfMIn = 0;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexOfMIn])
            {
                indexOfMIn = j;
                // indexOfMIn = 3;
            }
        }

        // swap A[i] and A[indexOfMIn]
        temp = A[i]; // temp = 12
        A[i] = A[indexOfMIn]; // A[0] = A[indexOfMIn] => A[0] = A[3] => A[0] = 5  
        A[indexOfMIn] = temp; //A[indexOfMIn] = temp => A[3] = 12
    }
}

int main()
{

    int A[] = {12, 5, 65, 5, 23, 7};
    int n = 6;
    printArray(A, n);
    selctionSort(A, n);
    printArray(A, n);
    return 0;
}
