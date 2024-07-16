#include<stdio.h>

int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks of Student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("\n\n");
    for(int i=0;i<5;i++){
        printf("Entered marks of Student %d is: %d \n",i+1,marks[i]);
    }
    return 0;
}
