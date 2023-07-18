#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: the integer
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
			
			if (n !=98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n > 100)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) % 10 + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) % 10 + '0');
				_putchar((n % 10) + '0');
			}
			n--;

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
