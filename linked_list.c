#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

struct singlelinkedlist {
    struct node* head;
    struct node* tail;
};

int main() {
    struct singlelinkedlist linked_list;
    linked_list.head = (struct node*) malloc(sizeof(struct node));
    linked_list.head->value = 45;
    linked_list.head->next = (struct node*) malloc(sizeof(struct node));
    linked_list.head->next->value = 50;
    linked_list.head->next->next = (struct node*) malloc(sizeof(struct node));
    linked_list.head->next->next->value = 55;
    linked_list.head->next->next->next = NULL;
    printf("%d\n", linked_list.head->value);
    printf("%d\n", linked_list.head->next->value);
    printf("%d\n", linked_list.head->next->next->value);
    return 0;
}
