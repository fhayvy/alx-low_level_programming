#include "main.h"

/**
 * _puts_recursion - Prints a string
 *
 * @s: The string
 */

void _puts_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*p);
	p++;
	_puts_recursion(p);
}
