#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	while (i < 10)
	{
		int a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
