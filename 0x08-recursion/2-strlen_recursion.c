#include "main.h"

/**
 * _strlen_recursion - Returns the length of the string
 *
 * @s: The String
 * Return: An Integer
 */

int _strlen_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')
	{
		return (0);
	}

	p++;
	return (_strlen_recursion(p) + 1);
}
