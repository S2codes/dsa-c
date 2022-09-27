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

// Case 1: insert at first
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// Case 2: insert in between
struct Node *insertAtIndex(struct Node *head, int data, int index)
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

// Case 3: insert at the end 
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    struct Node *p = head;
    while (p->next!= NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4 :insert after a node 
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;

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
    printf("insertaion at first\n");

    // insert at first
    // head = insertAtFirst(head, 75);

    // insert in beteween 
    // head = insertAtIndex(head, 55, 2);

    // insert at End 
    // head = insertAtEnd(head, 99);

    // insert after a Node 
    head = insertAfterNode(head, second, 63);

    linkedListTraversal(head);

    return 0;
}