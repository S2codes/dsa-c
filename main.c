#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element in node : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// insert in first
struct Node *insertInFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// insert in index
struct Node *insertInIndex(struct Node *head, int data, int index)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// insert in end

struct Node *insertInEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// insert after a Node

struct Node *afterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}


// Deletion 

// deletion in first
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// deletion at Given index
struct Node *deleteIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        q = q->next;
    }

    ptr->next = q->next;
    free(q);

    return head;
}


// deletion last Node
struct Node *deleteLastNode(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}


// deletion at Given Value
struct Node *deleteAtValue(struct Node *head, int Value)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->data != Value && q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    if (q->data == Value)
    {
        ptr->next = q->next;
        free(q);
    }else
    {
        printf("Value Not Found in Linked List\n");
    }
    
    return head;
}



int main()
{
    struct Node *Head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;

    Head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));

    Head->data = 23;
    Head->next = Second;

    Second->data = 3;
    Second->next = Third;

    Third->data = 12;
    Third->next = Fourth;

    Fourth->data = 52;
    Fourth->next = NULL;

    // Insert Element in First
    // Head = insertInFirst(Head, 89);

    // Head = insertInIndex(Head, 99, 4);
    // Head = insertInEnd(Head, 101);
    // Head = afterNode(Head, Second, 202);

    // traversal(Head);
    // delete in first
    // Head = deleteFirst(Head);

    // delete at index
    // Head = deleteIndex(Head, 2);
    // Head = deleteIndex(Head, 2);
    // Head = deleteLastNode(Head);
    Head = deleteAtValue(Head, 39);
    traversal(Head);

    return 0;
}