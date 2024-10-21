#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp, *tail, *nextnode;
    int choice = 1, pos, i = 1, count = 0;

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
        count++;
    }

    printf("Circular Linked List before deletion from front: ");
    temp = head;

    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);

    printf("\nEnter postion to delete data: ");
    scanf("%d", &pos);

    if (pos > count)
    {
        printf("invalid postion");
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }

        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);

        printf("\nCircular Linked List before deletion from front: ");
        temp = head;

        while (temp->next != head)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d ", temp->data);
    }

    return 0;
}