#include<stdio.h>

void value(int *a){
	*a = 65;
}

int main(){
	int a;
	value(&a);
	printf("The Value of variable is: %d\n", a);
	printf("The Changed Value of variable is: %d", a * 10);
	return 0;
}
