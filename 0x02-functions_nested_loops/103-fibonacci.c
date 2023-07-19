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
	int sum;
	int even_sum = 0;

	while (sum <= 4000000)
	{
		sum = (a + b);
		if ((sum % 2) == 0)
		{
			even_sum += sum;
		}
		a = b;
		b = sum;
		printf("%d", even_sum);
	}

	printf("\n");

	return (0);
}
