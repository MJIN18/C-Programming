#include<stdio.h>

int main(){
	int a,b,c;
	printf("\nEnter your marks of Maths out of 100:\n");
	scanf("%d",&a);
	printf("\nEnter your marks of Physics out of 100:\n");
	scanf("%d",&b);
	printf("\nEnter your marks of Chemistry out of 100:\n");
	scanf("%d",&c);
	int d= a+b+c;
	printf("\nTotal Marks in all three Subjects is:%d\n",d);
	int e= (d*100)/300;
	printf("\nPercentage Obtain: %d \n",e);

	
	if((a>=33)&&(b>=33)&&(c>=33)&&(e>=40)){
		printf("\nCongratulations! You have passed this examination successfully\n");
	}
	else{
		printf("\nSorry, You have failed in this examination\n");
	}

return 0;
}

