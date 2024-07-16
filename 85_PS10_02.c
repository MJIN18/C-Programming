#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("table.txt","w");
    printf("Enter the value of num: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d * %d = %d\n",i,num,num*i);
    }
    fclose(ptr);
    printf("Success!");
    return 0;
}