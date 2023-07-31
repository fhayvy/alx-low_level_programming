#include "main.h"

/**
 * _memset - fills memory with a constant
 *
 * @s: A pointer which points to the memory address
 * @b: The constant byte
 * @n: The number of bytes
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
