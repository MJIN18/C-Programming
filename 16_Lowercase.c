#include<stdio.h>

int main(){
char a;
printf("Enter a character:\n");
scanf("%c",&a);

if(a>=97 && a<=122){
	printf("It is in lowercase");
}
else{
	printf("It is not in lowercase");
}
return 0;
}

