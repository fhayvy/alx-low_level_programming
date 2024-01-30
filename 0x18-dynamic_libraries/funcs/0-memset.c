#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 *
 * @s: Address of memory to be filled
 * @b: The value
 * @n: The number of bytes to be changed
 *
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
