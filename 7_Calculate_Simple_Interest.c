#include<stdio.h>
int main(){
	int p, r, t;
	printf("Enter Principle Value:");
	scanf("%d",&p);
	printf("Enter the Rate of Interest:");
	scanf("%d",&r);
	printf("Enter the Time(no. of years):");
	scanf("%d",&t);
	int si = (p*r*t)/100;
	printf("Simple Interest will be:%d", si);
	return 0;
}
