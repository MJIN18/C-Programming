#include<stdio.h>

int main(){
int a,b,c,d;
printf("Enter first(A) number:\n");
scanf("%d",&a);
printf("Enter second(B) number:\n");
scanf("%d",&b);
printf("Enter third(C) number:\n");
scanf("%d",&c);
printf("Enter fourth(D) number:\n");
scanf("%d",&d);

if(a>b && a>c && a>d){
	printf("\nA is the greatest of all four numbers!");
}
else if(b>a && b>c && b>d){
	printf("\nB is the greatest of all four numbers!");
}
else if(c>a && c>b && c>d){
	printf("\nC is the greatest of all four numbers!");
}
else if(d>a && d>b && d>c){
	printf("\nD is the greatest of all four numbers!");
}
return 0;
}

