#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: String 1
 * @src: String 2
 *
 * Return: The concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
