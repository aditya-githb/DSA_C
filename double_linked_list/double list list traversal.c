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
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter Data: ");
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

        printf("Do you wnat to continue(0,1): ");
        scanf("%d", &choice);
    }

    temp = head;

    printf("Double Linked List: ");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    

    return 0;
}