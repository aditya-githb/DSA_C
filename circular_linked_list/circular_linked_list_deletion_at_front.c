#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp, *tail;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }

        tail->next = head;

        printf("Do you want to continue(0,1): ");
        scanf("%d", &choice);
    }

    printf("Circular Linked List before deletion from front: ");
    temp = head;

    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);

    temp = head;
    tail->next = head->next;
    free(temp);
    head = tail->next;

    printf("\nCircular Linked List before deletion from front: ");
    temp = head;

    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);

    return 0;
}