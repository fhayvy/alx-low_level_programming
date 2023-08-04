#include "main.h"

/**
 * _puts - Entry point
 * @str: The string
 */

void _puts(char *str)
{
	char *char_pointer = str;

	while (*char_pointer != '\0')
	{
		_putchar(*char_pointer);
		char_pointer++;
	}
	_putchar('\n');
}
