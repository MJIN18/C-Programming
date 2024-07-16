#include<stdio.h>

int main(){
	int a;
	printf("Enter your age:");
	scanf("%d",&a);
	if((70>a)&&(a>=18)){
		printf("You can Drive");
	}
	else{
		printf("You can't Drive");
	 
	}
return 0;
}

