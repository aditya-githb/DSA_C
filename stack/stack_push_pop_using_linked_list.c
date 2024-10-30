#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *link;
    };

    struct node *top = NULL, *newnode, *temp;
    int choice = 1;

    // push()
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d", &newnode->data);
        newnode->link = top;
        top = newnode;

        printf("want to push more item(0,1): ");
        scanf("%d", &choice);
    }

    // Display stack
    temp = top;
    if (top == NULL)
    {
        printf("stack empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }

    // pop()
    if (top == NULL)
    {
        printf("stack empty\n");
    }
    else
    {
        temp = top;
        printf("pop element = %d\n", top->data);
        top = top->link;
        free(temp);
    }

    // Display stack after pop
    temp = top;
    if (top == NULL)
    {
        printf("stack empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }

    return 0;
}
