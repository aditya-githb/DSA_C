#include <stdio.h>

int main () {

    int a[50][50], row, col;

    printf("enter the row of array: ");
    scanf("%d", &row);

    printf("enter the column of array: ");
    scanf("%d", &col);


    printf("enter the elements of array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }


    printf("the elements of array are: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    


return 0;

}