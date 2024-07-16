#include<stdio.h>

int main(){
    int arr[10];
    int *ptr = &arr[0];
    // for(int i=0;i<10;i++){
    //     printf("Enter the %dth number:\n",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // printf("\n\n");
    // for(int i=0;i<10;i++){
    //     printf("The Entered Number of %dth is: %d\n",i+1,arr[i]);
    // }
    // printf("The Third Element of Array is: %d",*(ptr+2));
    if(ptr+2==&arr[2]){
        printf("They points to same location!");
    }
    else{
        printf("They points to differnt location in memory!");
    }
    return 0;
}