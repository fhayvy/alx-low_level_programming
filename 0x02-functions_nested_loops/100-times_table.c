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

	for (n = 0; n <= 15; n++)
	{
		for (n = 0; n <= 15; n++)
		{
			ch = (n * n);

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
