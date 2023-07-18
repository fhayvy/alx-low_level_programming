#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
	return (0);
}
