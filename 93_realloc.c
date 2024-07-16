#include<stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(6 * sizeof(float));
    for(int i=0;i<5;i++){
        printf("Enter the value of num%d of array: ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("The value of num%d of array is: %.2f\n",i+1,ptr[i]);
    }

    ptr = realloc(ptr,10* sizeof(float));
    for(int i=0;i<10;i++){
        printf("Enter the value of num%d of array: ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of num%d of array is: %.2f\n",i+1,ptr[i]);
    }
    return 0;
}