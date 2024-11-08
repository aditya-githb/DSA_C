#include <stdio.h>

int main()
{
    int a[50];
    int size, data, flag = 0, l = 0, r, mid;

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

    r = size - 1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            flag = 1;
            printf("data found at index: %d", mid + 1);
            break;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (flag == 0)
    {
        printf("data not found");
    }

    return 0;
}
