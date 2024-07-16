#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}

int main(){
    int a ,b;
    printf("Enter the value of a and b :\n");
    scanf("%d %d", &a, &b);
    printf("The values of a and b before swap are: %d and %d\n", a , b);
    swap(&a,&b);
    printf("The values of a and b after swap are: %d and %d\n", a , b);
    return 0;
}