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
        count++;
        printf("Do you want to continue(0,1): ");
        scanf("%d", &choice);
    }

    printf("Circular Linked List before insertion: ");
    temp = head;

    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);

    printf("\nenter the position you want to insert data: ");
    scanf("%d", &pos);

    if (pos > count)
    {
        printf("invalid position");
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }

        newnode = (struct node *)malloc(sizeof(struct node));

        printf("enter data to insert: ");
        scanf("%d", &newnode->data);

        newnode->next = temp->next;
        temp->next = newnode;

        printf("Circular Linked List after insertion: ");
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