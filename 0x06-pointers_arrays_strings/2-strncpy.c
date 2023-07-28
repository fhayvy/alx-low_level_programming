#include "main.h"

/**
 * *_strncpy - Copies a string
 *
 * @dest: String 1
 * @src: String 2
 * @n: Number of characters to be copied from string 1 to string 2
 *
 * Return: a character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int index = 0;

	while (*src != '\0' && n > 0)
	{
		dest[index] = *src;
		src++;
		index++;
		n--;
	}
	while (n > 0)
	{
		dest[index] = '\0';
		index++;
		n--;
	}
	return (ptr);
}
