#include<stdio.h>

void positive(int *arr){
	int count=0;
	for(int i=0;i<10;i++){
	if(arr[i]>=0){
		count++;
	}
}
printf("\n\nTotal Number of Positive Integers in an array are: %d\n",count);
}

void negative(int *arr){
	int count=0;
	for(int i=0;i<10;i++){
	if(arr[i]<0){
		count++;
	}
}
printf("\nTotal Number of Negative Integers in an array are: %d\n",count);
}

int main(){
    int arr[10];
    printf("Enter the numbers to check whether the numbers are positive or negative in array\n\n");
    for(int i=0;i<10;i++){
    printf("Enter the number %d: \n",i+1);
    scanf("%d",&arr[i]);
    }
    printf("Numbers entered are: ");
    for(int i=0;i<10; i++){
    printf("%d ",arr[i]);
    }
    positive(arr);
    negative(arr);
    return 0;
}
