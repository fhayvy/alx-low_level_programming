#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: The memory address will be copied to dest
 * @src: The memory address will be copied from src
 * @n: Unsigned Integer n
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pt = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (pt);
}
