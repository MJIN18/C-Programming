#include<stdio.h>

int value(int a){
	a = 70;
	return a;
}

int main(){
    int a;
	a = 10;
	printf("The Value of variable a is: %d\n\n",a);
	a = a * 10;
	printf("The Changed Value of variable is: %d\n\n",a);
	value(a);
	printf("The Value of variable a using function is: %d\n\n",value(a)); // a = 70
    printf("The Value of variable after passing call by value is: %d\n\n",a);
    return 0;
}
