#include <stdio.h>

int main()
{
    int a[50];
    int size, flag = 0, l = 0, r, mid, temp, j;

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

    for (int i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\narray sorted by bubble sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
