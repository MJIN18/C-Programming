#include<stdio.h>
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}

int main(){
    int c;
    c = sum(10,100);
    printf("The value of c is: %d\n",c);
    return 0;
}
