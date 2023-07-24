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
	
	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	start = (length_of_string / 2);

	for (i = start; i < length_of_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
