#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: The number passed into the function
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
