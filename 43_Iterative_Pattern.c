#include<stdio.h>

void pattern(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    pattern(n-1);
    if(n==2){
        printf("***\n");
        return;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Pattern:\n");
    pattern(n);
    return 0;
}