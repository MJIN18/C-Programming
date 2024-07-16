#include<stdio.h>

typedef struct complex{
    float real;
    float img;
}complex;

void display(complex c,int i){
    printf("Complex number c%d is represented by: Z = a + ib = %.2f + i%.2f\n",i+1,c.real,c.img);
}

int main(){
    complex arr[5];
    for(int i=0;i<5;i++){
    printf("Enter the value of a of c%d: ",i+1);
    scanf("%f",&arr[i].real);
    printf("Enter the value of b of c%d: ",i+1);
    scanf("%f",&arr[i].img);
    }
    for(int i=0;i<5;i++){
    display(arr[i],i);
    }
    return 0;
}