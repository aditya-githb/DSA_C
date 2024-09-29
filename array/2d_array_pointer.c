#include <stdio.h>

int main () {
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *p;
    p = &a[0][0]; //or a[0];

    printf("%u\n", p); //or a, &a[0][0], &a, *a
    printf("%u\n", a+1); //or  &a[1], &a[1][0], &a, *(a+1)
    printf("%u\n", *(a+1)+2); //or  *(*(a+1)+2), a[1][2]
    printf("%u\n", &a[2][0]); //or *(*(a+2)+0), *a[1]+2, a[i][j], *(*(a+i)+j), *(a[i]+j)

return 0;

}