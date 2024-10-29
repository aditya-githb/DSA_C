#include <stdio.h>

int main()
{
    int stack[50];
    int top = -1, num, item;

    printf("Enter the size of stack: ");
    scanf("%d", &num);

    printf("Enter the stack items: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &stack[i]);
    }

    top = num - 1;

    printf("Enter the item to push onto the stack: ");
    scanf("%d", &item);

    if (top >= num)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = item;
    }

    printf("Stack elements after push:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    if (top < 1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        item = stack[top];
        top--;
    }

    printf("Stack elements after pop:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}
