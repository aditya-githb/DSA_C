#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *front = NULL, *rear = NULL, *newnode, *temp;
    int choice = 1;

    // nqueue
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (rear == NULL)
        {
            front = rear = newnode;
            rear->next = front;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
            rear->next = front;
        }

        printf("want to nqueue more item(0,1): ");
        scanf("%d", &choice);
    }

    if (front != NULL)
    {
        temp = front;

        printf("linked list: ");
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }

    temp = front;

    if (front == NULL && rear == NULL)
    {
        printf("queue is empty");
    }

    else if (front == rear)
    {
        printf("dqueued item: %d", temp->data);
        front = rear = NULL;
        free(temp);
    }
    else
    {
        printf("dqueued item: %d", temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }

    if (front != NULL)
    {
        temp = front;

        printf("\nlinked list: ");
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }

    return 0;
}
