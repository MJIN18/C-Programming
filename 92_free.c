#include<stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    float *ptr2;
    ptr = (float*) malloc(500000 * sizeof(float));
    for(int i=0;i<500000;i++){
        ptr2 = (float*) malloc(500000 * sizeof(float));
        printf("Enter the value of num%d of array: ",i+1);
        scanf("%f",&ptr[i]);
        free(ptr2);
    }
    for(int i=0;i<500000;i++){
        printf("The value of num%d of array is: %.2f\n",i+1,ptr[i]);
    }
    return 0;
}