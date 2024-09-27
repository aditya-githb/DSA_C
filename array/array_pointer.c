#include <stdio.h>

int main () {
    int a[5], i;
    int *q = a;

    printf("enter the array elements: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &q[i]);
    }
    
// different way to print array element using pointer
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i[q]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i[a]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(q+i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a+i));
    }
    



return 0;

}