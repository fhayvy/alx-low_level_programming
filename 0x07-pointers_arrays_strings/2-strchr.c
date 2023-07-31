#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: The string
 * @c: The character
 *
 * Return: A pointer to the first occurence of the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (*s == '\0')
	{

		return (s);
	}
}
