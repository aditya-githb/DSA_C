#include <stdio.h>

void main() {

int a[] = {1,2,3};
printf("the new created array is \n");
for (int i = 0; i < 3; i++)
{
    printf("%d ", a[i]);
}

printf("\n");

double b[] = {1.2,2.3,3.4};
printf("the new created array is \n");
for (int i = 0; i < 3; i++)
{
    printf("%.2lf ", b[i]);
}

}