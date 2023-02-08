#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFULL(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void encircularQueue(struct circularQueue *q, int val)
{
    if (isFULL(q))
    {
        printf("OVERFLOW! circularQueue is Full\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Equed elemet is : %d\n", val);
    }
}

int decircularQueue(struct circularQueue *q)
{
    int a = -1;

    if (isEmpty(q))
    {
        printf("OVERFLOW! circularQueue is Full\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
        q->arr[q->f] = 0;
    }
    return a;
}

int main()
{
    struct circularQueue q;
    // q.size = 100;
    q.size = 3;
    q.r = q.f = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // [1,2,3]

    // if (isEmpty(&q))
    // {
    //     printf("circularQueue is EMPTY\n");
    // }

    if (isEmpty(&q))
    {
        printf("circularQueue is EMPTY\n");
    }

    encircularQueue(&q, 23);
    encircularQueue(&q, 3);
    // encircularQueue(&q, 5);

    if (isFULL(&q))
    {
        printf("circularQueue is FULL\n");
    }

    printf("Dequeing Element : %d\n", decircularQueue(&q));
    printf("Dequeing Element : %d\n", decircularQueue(&q));

        encircularQueue(&q, 11);
    encircularQueue(&q, 33);
    encircularQueue(&q, 33);


    return 0;
}