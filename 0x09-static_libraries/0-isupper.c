#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
