#include <stdio.h>

int main()
{
	int n,a=1;
	int i=2;
	printf("Enter a number to check whether its prime of not: ");
	scanf("%d", &n);

	while(i < n)
	{
		a = n % i;
		i++;
//				printf("\nThe value of a is: %d\n", a);

		if (a == 0)
		{
			printf("\nIts not a Prime number");
			break;
		}
		
	}
	if(a!=0 || n==2 || n==1){
			printf("\nIts a Prime number");
		}
	return 0;
}
