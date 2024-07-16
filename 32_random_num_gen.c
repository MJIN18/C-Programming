#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // printf("%d to %d",0,RAND_MAX);
    int num;
    srand(time(0));
    num = rand()%100 + 1;
    printf("The number is %d",num);
    return 0;
}