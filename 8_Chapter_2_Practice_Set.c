// Write a program to check whether a number is divisible by 97 or not

#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("\nDivisiblity test returns:%d\n",a%97);
    printf("\nNote: If divisiblity test returns 0 then number is divisible by 97");
    return 0;
}
