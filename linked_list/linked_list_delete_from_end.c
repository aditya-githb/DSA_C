#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp, *prevnode;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter new data: ");
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

        printf("Do you want to continue (0,1): ");
        scanf("%d", &choice);
    }

    temp = head;
    printf("linked list before deletion at end\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }


    temp = head;
    while (temp->next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }

    if (temp == head)
    {
        head = NULL;
    }
    else
    {
        prevnode->next = NULL;
    }

    free(temp);

    temp = head;
    printf("\nlinked list after deletion at end\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}