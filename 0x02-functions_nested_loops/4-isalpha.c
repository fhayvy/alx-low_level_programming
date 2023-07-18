#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: the character
 *
 * Return: 1 if character is an alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
