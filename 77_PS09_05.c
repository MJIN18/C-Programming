#include<stdio.h>

typedef struct complex{
    float real;
    float img;
}complex;

int main(){
    complex c1;
    printf("Enter the value of a: ");
    scanf("%f",&c1.real);
    printf("Enter the value of b: ");
    scanf("%f",&c1.img);
    printf("Complex number is represented by: Z = a + ib = %.2f + i%.2f",c1.real,c1.img);
    return 0;
}