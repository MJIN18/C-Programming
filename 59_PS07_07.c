#include<stdio.h>

void table(int *arr,int num,int n){
    printf("\nMultiplication Table of %d : \n\n",num);
    for(int j=0;j<n;j++){
            printf("%d * %d = %d\n",num,j+1,num*(j+1));
        }
}

int main(){
    int arr[3][10];
    table(arr[0],2,10);
    table(arr[1],7,10);
    table(arr[2],9,10);
    return 0;
}