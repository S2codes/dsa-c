#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFULL(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFULL(q))
    {
        printf("OVERFLOW! Queue is Full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Equed elemet is : %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;

    if (isEmpty(q))
    {
        printf("OVERFLOW! Queue is Full\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    // q.size = 100;
    q.size = 3;
    q.r = q.f = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // [1,2,3]

    if (isEmpty(&q))
    {
        printf("Queue is EMPTY\n");
    }

    enqueue(&q, 23);
    enqueue(&q, 3);
    enqueue(&q, 5);
    enqueue(&q, 5);

    if (isEmpty(&q))
    {
        printf("Queue is EMPTY\n");
    }
    if (isFULL(&q))
    {
        printf("Queue is FULL\n");
    }

    // printf("Dequeing Element : %d\n", dequeue(&q));
    // printf("Dequeing Element : %d\n", dequeue(&q));
    // printf("Dequeing Element : %d\n", dequeue(&q));
    // printf("Dequeing Element : %d\n", dequeue(&q));

    //     enqueue(&q, 5);


    return 0;
}