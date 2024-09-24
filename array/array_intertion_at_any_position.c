#include <stdio.h>

int main() {

    int a[50], size, num, pos;

    printf("enter the the size of array: \n");
    scanf("%d", &size);

    printf("enter the elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the elements of array before inserting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nenter the data you want of insert in the array: \n");
    scanf("%d", &num);

    printf("enter the position: \n");
    scanf("%d", &pos);

    for (int i = size-1; i >= pos-1; i--)
    {
        a[i+1] = a[i]; 
    }

    a[pos-1] = num;
    size++;

    printf("the elements of array after inserting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    } 
    

return 0;
}