#include<stdio.h>

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the %dth number:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    printf("The Multiplication Table is: \n");
    for(int i=0;i<10;i++){
        printf("5 * %d = %d\n",arr[i],arr[i]*5);
    }
    return 0;
}