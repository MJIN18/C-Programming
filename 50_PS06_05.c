#include<stdio.h>

int main(){
    int i = 10;
    int *j = &i;
    int **k = &j;
    printf("The Value of Variable i is: %d\n",i);
    printf("The Value of Variable i is: %d\n",*j);
    printf("The Value of Variable i is: %d\n",**k);
    return 0;
}
