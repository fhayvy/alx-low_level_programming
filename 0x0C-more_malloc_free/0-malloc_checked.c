#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - Allocates memory using malloc
 * @b: An unsigned int
 *
 * Return: A pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}

	return (array);
}
