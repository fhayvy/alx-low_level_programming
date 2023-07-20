#include "main.h"

/**
 * print_diagonal - Prints a diagonal n number of times
 *
 * @n: The integer
 */

void print_diagonal(int n)
{
	int i = 0;
	int spaces;

	if (n > 0)
	{
		while (n > 0)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

			n--;
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
