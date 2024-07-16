#include <stdio.h>

int main()
{
	int n,a;
	int i=2;
	printf("Enter a number to check whether its prime of not: ");
	scanf("%d", &n);

	do
	{
		a = n % i;
		i++;
//				printf("\nThe value of a is: %d\n", a);

		if (a == 0 && n!=2)
		{
			printf("\nIts not a Prime number");
			break;
		}
	}while(i<n);
	
	if (a != 0 || n==2)
	{
		printf("\nIts a Prime number");
	}
	return 0;
}
