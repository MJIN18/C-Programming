#include<stdio.h>

float fahrenheit(float f);

int main(){
    float c,f;
    printf("Enter the value of temperature in Celsius: ");
    scanf("%f",&c);
    float fahrenheit(float c);
    printf("\nThe Value of Temperature in Fahrenheit is: %f F",fahrenheit(c));
    return 0;
}

float fahrenheit(float c){
	float f;
    f = (c*9/5) + 32;
    return f;
}

