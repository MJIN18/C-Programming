#include<stdio.h>

int main(){
int n;
printf("Enter the value of 'n' to print n natural numbers:\n");
scanf("%d",&n);

for(int a=0; a<n; a++){
	printf("\nThe number followed by n is: %d",a+1);
}
return 0;
}

