#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a;
	int n = 0;
	int tenth;

	while (n < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				tenth = (a / 10);

				_putchar(tenth + '0');
			}

			_putchar((a % 10) + '0');
		}

		_putchar('\n');
		n++;
	}
}
