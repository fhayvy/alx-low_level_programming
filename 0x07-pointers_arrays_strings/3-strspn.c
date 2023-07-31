#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: The string
 * @accept: The substring
 *
 * Return: The length of the prefix substring
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	char *a = accept;
	unsigned int i = 0;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				i++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (i);
}
