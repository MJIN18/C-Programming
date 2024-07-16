#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    ptr = fopen("integer.txt","r");
    fscanf(ptr,"%d",&num);
    ptr = fopen("integer.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    printf("Success!");
    return 0;
}