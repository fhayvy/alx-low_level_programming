#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int sum;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
