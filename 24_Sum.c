#include <stdio.h>

int main()
{
	int n, b;
	int a = 1;
	printf("The value of n to print sum of n natural number: ");
	scanf("%d", &n);

	while (a <= n)
	{
		//	printf("\nThe value of n natural number is: %d\n",a);
		//	b = a + b++;
		b += a;
		//		printf("\nThe Sum of n natural number is: %d\n", b);
		a++;
	}

	printf("\nSum of all natural number is: %d", b);
	return 0;
}
