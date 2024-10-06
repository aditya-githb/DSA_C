#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp, *nextnode;
    int choice = 1, pos;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
        }
        temp = newnode;

        printf("Do you want to continue (0, 1): ");
        scanf("%d", &choice);
    }

    printf("Linked list before deleting:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\nEnter position to delete from list: ");
    scanf("%d", &pos);

    if (pos == 1 && head != NULL)
    {
        nextnode = head;
        head = head->next;
        free(nextnode);
    }
    else
    {
        temp = head;
        int i = 1;

        while (temp != NULL && i < pos - 1)
        {
            temp = temp->next;
            i++;
        }

        if (temp == NULL || temp->next == NULL)
        {
            printf("Position out of bounds.\n");
        }
        else
        {
            nextnode = temp->next;
            temp->next = nextnode->next;
            free(nextnode);
        }
    }

    printf("Linked list after deleting:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
