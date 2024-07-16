#include<stdio.h>

int main(){
int n,a,z;

printf("Enter the value to obatain its multiplication table: ");
scanf("%d",&n);

for(a=1; a<11; a++){
	z = n * a;
	printf("%d * %d = %d\n",n, a, z);
	
}
return 0;
}

