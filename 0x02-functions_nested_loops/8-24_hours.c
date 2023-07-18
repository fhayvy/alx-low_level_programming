#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i;

	while (i < 24)
	{
		int j;



		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10);
			_putchar(i % 10);
			_putchar(':');
			_putchar(j / 10);
			_putchar(j % 10);
			_putchar('\n');


		}

		j++;
	}
}
