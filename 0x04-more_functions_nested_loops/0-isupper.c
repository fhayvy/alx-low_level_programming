#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character
 *
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
