#include<stdio.h>

int main(){
int n,a,z,b=0;

printf("Enter the value to obatain its sum of multiplication table: ");
scanf("%d",&n);

for(a=1; a<=10; a++){
	z = n * a;
	b += z;
}

printf("\nSum of multiplication table is %d",b);

return 0;
}
