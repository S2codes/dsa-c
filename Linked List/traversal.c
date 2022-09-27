// linked list create and travelsal
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// traversal
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allocated memory for nodes in the linked list in HEAP
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // linked first and second node
    head->data = 13;
    head->next = second;

    // linked second and third node
    second->data = 11;
    second->next = third;

    // terminate the list at the third node
    third->data = 7;
    third->next = NULL;

    linkedListTraversal(head);

    return 0;
}