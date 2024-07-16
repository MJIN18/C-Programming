#include<stdio.h>
float average(int a, int b, int c){
    float avg;
    avg = (float)(a + b + c)/3;
    return avg;
}

int main(){
    int a,b,c;
    printf("Enter the values to find the average:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nAverage: %f",average(a,b,c));
    return 0;
}
