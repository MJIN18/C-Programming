#include<stdio.h>

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        int result;
        result = sum(n-1) + n;
        return result;
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nSum of first n natural number is: %d",sum(n));
    return 0;
}