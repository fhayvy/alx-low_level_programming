#include "main.h"

/**
 * print_sign - Prints the sign of an integer
 * @n: the integer
 *
 * Return: 1 if positive, -1 if negative and 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
