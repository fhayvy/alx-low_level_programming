#include "main.h"

/**
 * puts2 - Entry point
 * @str: The string
 *
 */

void puts2(char *str)
{
	char *current_char = str;

	while (*current_char != '\0')
	{
		if (*current_char % 2 == 0)
		{
			_putchar(*current_char);
		}
		current_char++;
	}
	_putchar('\n');
}
