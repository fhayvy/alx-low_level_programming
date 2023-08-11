#include "main.h"
#include <stdlib.h>


/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: An array of elements
 * @size: The size of the array
 *
 * Return: A pointer to an array
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;
	unsigned int array_size;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	array_size = nmemb * size;

	a = malloc(array_size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < array_size; i++)
	{
		a[i] = '\0';
	}

	return (a);
}
