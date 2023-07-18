#include "main.h"

/**
 * print_last_digit - Prints the last digit of an alphabet
 * @n: the integer
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ch;

	ch = n % 10;

	if (ch < 0)
	{
		ch *= -1;
	}

	_putchar(ch + '0');
	return (ch);
}
