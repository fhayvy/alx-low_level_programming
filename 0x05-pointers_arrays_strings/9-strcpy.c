#include "main.h"

/**
 * _strcpy - Copies a string to a buffer
 * @dest: Points to the buffer
 * @src: Points to a string
 *
 * Return: Returns the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);

}
