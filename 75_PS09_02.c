#include<stdio.h>

struct vector{
    int x;
    int y;
};

void sumvector(struct vector v1,struct vector v2){
    printf("Sum of two vectors of X-dimensional and Y-dimensional is: %d and %d respectively",v1.x+v2.x,v1.y+v2.y);
}

int main(){
    struct vector v1,v2;
    printf("Enter the value of x dimensional of v1: ");
    scanf("%d",&v1.x);
    printf("Enter the value of y dimensional of v1: ");
    scanf("%d",&v1.y);
    printf("Enter the value of x dimensional of v2: ");
    scanf("%d",&v2.x);
    printf("Enter the value of y dimensional of v2: ");
    scanf("%d",&v2.y);
    printf("The Values of X-dimensional and Y-dimensional of v1 is: %d and %d respectively\n",v1.x,v1.y);
    printf("The Values of X-dimensional and Y-dimensional of v2 is: %d and %d respectively\n",v2.x,v2.y);
    sumvector(v1,v2);
    return 0;
}
