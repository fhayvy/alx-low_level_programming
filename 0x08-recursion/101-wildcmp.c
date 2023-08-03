#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string and ignores *
 * @s: The string
 *
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	if (*s == '*')
	{
		return (_strlen_recursion(s + 1));
	}
	s++;
	return (_strlen_recursion(s) + 1);
}


/**
 * iterate_wild - Moves the current pointer of a string from a wildcard
 *			character till it points to a non-wild character
 *
