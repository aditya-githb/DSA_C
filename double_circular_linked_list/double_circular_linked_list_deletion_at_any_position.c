#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *head = NULL, *tail, *newnode, *temp;
    int choice = 1, pos, count = 0, i = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
            tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        count++;
        printf("Do you want to continue(0,1): ");
        scanf("%d", &choice);
    }

    temp = head;
    printf("Double Circular Linked List before deletion: ");
    while (temp != tail)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);

    printf("\nEnter position to delete data: ");
    scanf("%d", &pos);

    if (pos > count || pos < 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        if (temp->next == head)
        {
            tail = temp->prev;
            free(temp);
        }

        else
        {
            free(temp);
        }

        temp = head;
        printf("Double Circular Linked List after deletion: ");
        while (temp != tail)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }

    return 0;
}
