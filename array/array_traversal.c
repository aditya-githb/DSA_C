#include <stdio.h>

int main () {
    int a[50], size;

    printf("enter the size of array: \n");
    scanf("%d", &size);

    printf("enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("the elements of array are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

return 0;

}
