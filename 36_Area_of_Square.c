#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the value of a to calculate the Area of Square: ");
    scanf("%d",&a);
    printf("\nThe Area of Square is: %f\n", pow(a,2));
    return 0;
}

// User Defined Library

// int sq(int a){
//     int square;
//     square = a * a;
//     return square;
// }

// int main(){
//     int a;
//     printf("Enter the value of a to calculate the Area of Square: ");
//     scanf("%d",&a);
    
//     int sq(a);
//     printf("\nThe Area of Square is: %d\n",sq(a));

//     return 0;
// }
