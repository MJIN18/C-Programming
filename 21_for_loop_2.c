#include<stdio.h>

int main(){
int n,a;
printf("Enter the value of n to print n natural numbers:\n");
scanf("%d",&n);

for( a=n; a; a--){
	printf("\nThe value of natural numbers followed is: %d",a);
}
return 0;
}

