#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: the integer
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');

		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
