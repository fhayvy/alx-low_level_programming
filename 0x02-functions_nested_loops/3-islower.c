#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c:the character
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	int r;

	if (r >= 'a' && r <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
