#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Sucess)
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		int ch;

		for (b = 0; b < 10; b++)
		{
			ch = (a * b);

			_putchar(ch + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
