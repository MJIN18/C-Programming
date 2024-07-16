#include<stdio.h>

int value(int a){
    a = 7;
    printf("Address of i using function : %u\n",&a);
    return a;
}

int main(){
    int i = 7;
    // printf("Enter the value of i:");
    // scanf("%d",&i);
    printf("Address of i: %u\n",&i);
    value(i);
    return 0;
}