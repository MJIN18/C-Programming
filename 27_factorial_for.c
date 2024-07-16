#include<stdio.h>

int main(){
    int n, b=1;
    int i=1;
    printf("Enter the value of n to print factorial of a number: ");
    scanf("%d",&n);

    for(i=1; i<=n ; i++){
        b *= i;
    }
        printf("\nFactorial of a number is %d",b);
        
    return 0;
}
