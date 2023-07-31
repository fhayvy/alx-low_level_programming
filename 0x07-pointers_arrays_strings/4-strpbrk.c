#include "main.h"

/**
 * _strpbrk - Searches for a string for any of a set of bytes
 *
 * @s: The string
 * @accept: The set of bytes
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			else
			{
				a++;
			}
		}
		if (*a == '\0')
		{
			a = accept;
		}
		s++;
	}
	return (0);
}
