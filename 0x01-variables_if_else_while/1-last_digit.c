#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ch;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ch = n % 10;

	if (ch > 5 && ch != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ch);
	}
	else if (ch == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ch);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ch);
	}
	return (0);
}
