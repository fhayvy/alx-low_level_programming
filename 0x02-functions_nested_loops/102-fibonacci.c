#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int n = 0;
	int sum;

	while (n <= 49)
	{
		sum = (a + b);
		printf("%d", sum);

		if (n != 49)
		{
			printf(", ");
		}
		b = a;
		a = sum;
		n++;
	}

	printf("\n");

	return (0);
}
