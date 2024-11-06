#include <stdio.h>

int main () {

    int a[50];
    int size, data, flag = 0;

    printf("enter the size of array: ");
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

    printf("\nenter the data to search in the array: ");
    scanf("%d", &data);

    for (int i = 0; i < size; i++)
    {
        if (a[i] == data)
        {
            printf("data found at index: %d", i+1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("data not found");
    }

return 0;

}
