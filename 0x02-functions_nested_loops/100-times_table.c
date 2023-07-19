#include "main.h"

/**
 * print_times_table - Prints multiplication table of an integer
 * @n: The integer
 *
 * Return: Always 0 (Success)
 */


void print_times_table(int n)
{
	int ch;
	int a;
	int b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			ch = (a * b);

			if (ch > 100)
			{
				_putchar((ch / 100) + '0');
				_putchar((ch / 10) % 10 + '0');
				_putchar((ch % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (ch > 10)
			{
				_putchar((ch / 10) % 10 + '0');
				_putchar((ch % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(ch);
			}
		}
	}
}
