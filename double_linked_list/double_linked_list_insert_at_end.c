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

        printf("Do you want to continue (0,1): ");
        scanf("%d", &choice);
    }

    // Printing list before insertion
    temp = head;
    printf("Double linked list before insertion at end:\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Insertion 
    newnode = (struct node *)malloc(sizeof(struct node));
    
    printf("\nEnter data to insert at end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL; 

    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;

    // Printing list after insertion
    temp = head;
    printf("Linked list after insertion at end:\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
