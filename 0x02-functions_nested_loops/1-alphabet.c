#include "main.h"

/**
 * main - Prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
	return (0);
}
