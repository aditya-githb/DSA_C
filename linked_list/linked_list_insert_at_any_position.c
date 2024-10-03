#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node // create node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp;
    int choice = 1, count, i = 1, pos;

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
    // printing list
    temp = head;
    printf("linked list before insertion\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count += 1;
    }

    // insertion process

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
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("enter data to insert: ");
    scanf("%d", &newnode->data);

    newnode->next = temp->next;
    temp->next = newnode;

    // printing list after insertion process
    temp = head;
    printf("linked list after insertion at end\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}