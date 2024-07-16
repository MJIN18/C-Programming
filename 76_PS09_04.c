#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct vector *ptr;
    struct vector v1;
    ptr = &v1;
     printf("Enter the value of x dimensional of v1: ");
    scanf("%d",&(*ptr).x);
    printf("Enter the value of y dimensional of v1: ");
    scanf("%d",&(*ptr).y);
    printf("The Values of X-dimensional and Y-dimensional of v1 is: %d and %d respectively\n",(*ptr).x,(*ptr).y);
    // Arrow Operator
    printf("The Values of X-dimensional and Y-dimensional of v1 using arrow operator is: %d and %d respectively\n",(ptr->x),(ptr->y));
    return 0;
}
