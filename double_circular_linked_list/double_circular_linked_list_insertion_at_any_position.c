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
    printf("Double Circular Linked List before insertion: ");
    while (temp != tail)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);

    printf("\nEnter position: ");
    scanf("%d", &pos);

    if (pos > count || pos < 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data to insert: ");
        scanf("%d", &newnode->data);

        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    temp = head;
    printf("Double Circular Linked List after insertion: ");
    while (temp != tail)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);

    return 0;
}
