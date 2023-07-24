#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: The string
 */

void puts_half(char *str)
{
	int length_of_string = 0;
	int start;
	int i;

	while (str[length_of_string])
	{
		length_of_string++;
	}

	if (length_of_string % 2 == 0)
	{
		start = (length_of_string / 2);
	}
	else
	{
		start = (length_of_string - 1) / 2;
	}

	for (i = start; i < length_of_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
