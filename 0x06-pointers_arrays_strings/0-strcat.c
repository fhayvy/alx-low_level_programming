#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: String 1
 * @src: String 2
 *
 */

char *_strcat(char *dest, char *src)
{
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
	return (dest);
}
