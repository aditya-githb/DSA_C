#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };

    struct node *head = NULL, *newnode, *temp;
    int choice = 1, pos, i = 1, count = 0;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue(0,1): ");
        scanf("%d", &choice);
        count++;
    }

    temp = head;

    printf("Double Linked List before deletion from end: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    temp = head;
    printf("\nenter the position to delete: ");
    scanf("%d", &pos);

    if (pos > count)
    {
        printf("invalid position");
    }
    else
    {

        while (i < pos)
        {
            temp = temp->next;
            i++;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);

        temp = head;
        printf("Double Linked List before deletion from end: ");

        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }

    return 0;
}