#include <stdio.h>

int main() {

    int a[50], size, pos;

    printf("enter the size of the array: \n");
    scanf("%d", &size);

    printf("enter the elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the elements of array before deletion are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\nenter the position you want to delete: \n");
    scanf("%d", &pos);

    for (int i = pos-1; i < size; i++)
    {
        a[i] = a[i+1];
    }
    size--;

    printf("the elements of array after deletion are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;
}