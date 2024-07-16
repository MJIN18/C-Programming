#include<stdio.h>

float force(float mass){
    float F;
    F = mass * 9.8 ;
    return F;
}

int main(){
    float mass;
    printf("Enter the value of Mass: ");
    scanf("%f",&mass);
    printf("\nThe Force of Gravity is %.02f N\n",force(mass));
    return 0;
}
