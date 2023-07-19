#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 0;
	long int b = 1;
	long int n = 0;
	long int sum;

	while (n <= 49)
	{
		sum = (a + b);
		printf("%ld", sum);

		if (n != 49)
		{
			printf(", ");
		}
		a = b;
		b = sum;
		n++;
	}

	printf("\n");

	return (0);
}
