#include<stdio.h>

void table(int *arr,int num,int n){
    printf("\nMultiplication Table of %d : \n\n",num);
    for(int j=0;j<n;j++){
            printf("%d * %d = %d\n",num,j+1,num*(j+1));
        }
}

int main(){
    int n,m;
    printf("Enter the size of array (in form of n*m): \n");
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the value of m: ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
    	int a;
    	printf("\nEnter the value of number: ");
    	scanf("%d",&a);
    	table(arr[i],a,m);
	}
    return 0;
}
