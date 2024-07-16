#include<stdio.h>

int main(){
int i=0;
int a;
printf("Enter a number:\n");
scanf("%d",&a);

do{
	printf("The natural number followed is: %d\n", i+1);
	i++;
}while(i<a);
return 0;
}

