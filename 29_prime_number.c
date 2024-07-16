#include <stdio.h>

int main()
{
	int n, i, a;
	printf("Enter a number to check whether its prime of not: ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		a = n % i;
		//		printf("\nThe value of a is: %d\n", a);

		if (a == 0 && n!=2)
		{
			printf("\nIts not a Prime number");
			break;
		}
	}
	if (a != 0)
	{
		printf("\nIts a Prime number");
	}
	return 0;
}
