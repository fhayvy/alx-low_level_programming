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
	int c = 0;
	
	printf("%d", a);
	printf("%d", b);

	while (c < 98)
	{
		sum = (a + b);
		printf("%d", sum);
		if (c != 97)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
