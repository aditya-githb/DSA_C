#include<stdio.h>

int main(){
    int num, i, j , k, temp=0;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array elements: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    //sorting
    
    for(i=0;i<num-1;i++){
        for(j=0;j<num-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Array after sort: ");
    for(i=0;i<num;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
