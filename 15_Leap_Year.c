#include<stdio.h>

int main(){
	int a;
	printf("Enter a Year to check whether it is leap year or not:\n");
	scanf("%d",&a);
	
	if((a%4==0)&&(a%100==0)&&(a%400==0)){
		printf("\nThis year is A Leap Year\n");
	}
	else{
		printf("\nThis year is not A Leap Year\n");
	}

return 0;
}

