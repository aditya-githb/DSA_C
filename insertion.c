#include <stdio.h>

void insertion(int arr[], int num) {
    for (int i = 1; i < num; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main() {
    int arr[] = {32, 54, 21, 32, 54, 89};
    int num = sizeof(arr) / sizeof(arr[0]);
    printf("Array before sort: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertion(arr, num);
    printf("Array after sort: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
