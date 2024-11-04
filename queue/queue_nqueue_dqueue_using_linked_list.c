#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *front = NULL, *rear = NULL;
    struct node *newnode, *temp;

    int choice = 1;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (front == NULL && rear == NULL) {
            front = rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }

        printf("Want to enqueue more items (0,1): ");
        scanf("%d", &choice);
    }

    if (front != NULL) {
        temp = front;
        printf("Linked list: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    } else {
        printf("Queue is empty\n");
    }

    if (front != NULL) {
        temp = front;
        printf("Dequeued item: %d\n", temp->data);
        front = front->next;
        free(temp);
    } else {
        printf("Queue is empty\n");
    }

    if (front != NULL) {
        temp = front;
        printf("Linked list after dequeue: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    } else {
        printf("Queue is empty\n");
    }

    return 0;
}
