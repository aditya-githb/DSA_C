#include <stdio.h>

int main () {
    int a[50], size, num;

    printf("enter the size of array: \n");
    scanf("%d", &size);

    printf("enter the elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the elements of array are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nenter the data you wnat to enter in the front of array: ");
    scanf("%d", &num);

    for (int i = size-1; i >= 0; i--)
    {
        a[i+1] = a[i];
    }

    a[0] = num;
    size++;

    printf("the elements of array after inserting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    


return 0;

}