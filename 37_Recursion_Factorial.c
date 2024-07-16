#include<stdio.h>
int factorial(int x){
    int a;
    if(x==0 || x==1){
        return 1;
    }
    else{
        a = x * factorial(x-1);
        return a;
    }
}

int main(){
    int a;
    printf("Enter the value to find it's factorial: ");
    scanf("%d",&a);
    printf("\nFactorial of %d is %d",a,factorial(a));
    return 0;
}
