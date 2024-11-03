#include <stdio.h>

int main()
{
    int queue[50];
    int front = -1, rear = -1;
    int size, item, choice = 1;

    printf("Enter the initial size of the queue: ");
    scanf("%d", &size);

    printf("Enter the elements of the queue: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &queue[i]);
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
    }

    printf("The queue is: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");

    while (choice)
    {
        printf("Enter an item to enqueue: ");
        scanf("%d", &item);

        if (rear == 49)
        {
            printf("Overflow\n");
        }
        else
        {
            rear++;
            queue[rear] = item;
        }

        printf("More items? (0 for No, 1 for Yes): ");
        scanf("%d", &choice);
    }

    printf("The queue after enqueue: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\ndqueue item: %d", queue[front]);
        front++;
    }

    printf("\nThe queue after dnqueue: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}
