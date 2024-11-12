#include <stdio.h>

void merge(int A[], int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb;
    int b[ub - lb + 1];

    while (i <= mid && j <= ub)
    {
        if (A[i] <= A[j])
        {
            b[k - lb] = A[i];
            i++;
        }
        else
        {
            b[k - lb] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        b[k - lb] = A[i];
        i++;
        k++;
    }

    while (j <= ub)
    {
        b[k - lb] = A[j];
        j++;
        k++;
    }

    for (i = lb; i <= ub; i++)
    {
        A[i] = b[i - lb];
    }
}

void mergeSort(int A[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;

        mergeSort(A, lb, mid);
        mergeSort(A, mid + 1, ub);

        merge(A, lb, mid, ub);
    }
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    mergeSort(A, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
