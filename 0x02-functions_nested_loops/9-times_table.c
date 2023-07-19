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

			if (ch < 10)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(ch + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((ch / 10) + '0');
				_putchar((ch % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
