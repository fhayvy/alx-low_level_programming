#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != b)
			{
				if (a < b)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(',');
				}
				else
				{
					putchar(b + '0');
					putchar(a + '0');
					putchar(',');
				}
			}
				
		}
	}
	return (0);
}
