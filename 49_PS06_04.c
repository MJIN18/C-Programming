#include<stdio.h>

void SumAndAvg(int a, int b, int *sum , float *avg){
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main(){
    int a= 10, b=15;
    int sum;
    float avg;
    SumAndAvg(a,b,&sum,&avg);
    printf("The Sum of a and b is: %d\n",sum);
    printf("The Average of a and b is: %f\n",avg);
    return 0;
}
