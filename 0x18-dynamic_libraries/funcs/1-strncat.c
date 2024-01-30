#include "main.h"

/**
 * *_strncat - Concatenates two strings
 *
 * @dest: String 1
 * @src: String 2
 * @n: number of bytes from string 2 to be concatenated
 *
 * Return: The Concatenated String
 */


char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (ptr);
}
