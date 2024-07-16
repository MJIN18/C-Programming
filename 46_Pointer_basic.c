#include<stdio.h>

int main(){
    int a;
    int *b;
    b = &a;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    printf("Address of variable a is: %d\n", b);
    printf("Value  of variable a using address is: %d\n", *b);
    return 0;
}
