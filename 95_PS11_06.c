#include<stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    ptr = (float*) calloc(num , sizeof(float));
    for(int i=0;i<num;i++){
        printf("Enter the value of num%d of array: ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<num;i++){
        printf("The value of num%d of array is: %.2f\n",i+1,ptr[i]);
    }
    int num2;
    printf("Enter the new size of array: ");
    scanf("%d",&num2);
    ptr = realloc(ptr,num2* sizeof(float));
    for(int i=0;i<num2;i++){
        printf("Enter the value of num%d of array: ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<num2;i++){
        printf("The value of num%d of array is: %.2f\n",i+1,ptr[i]);
    }
    return 0;
}