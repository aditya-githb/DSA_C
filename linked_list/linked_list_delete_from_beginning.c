#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *temp, *newnode;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof("struct node"));

        printf("enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }

        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("do you want to continue(0,1): ");
        scanf("%d", &choice);
    }

    temp = head;

    printf("linked list before deletion from front\n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    temp = head;

    head = temp->next;

    free(temp);

    temp = head;

    printf("\nlinked list after deletion from front\n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}