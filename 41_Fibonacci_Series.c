#include<stdio.h>

int fibonacci(int n){
    int x;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }

    else{
        x = fibonacci(n-1) + fibonacci(n-2); 
        return x;
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nThe nth element of Fibonacci Series is: %d",fibonacci(n));
    return 0;
}