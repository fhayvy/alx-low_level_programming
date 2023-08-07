#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars with a specific char
 *
 * @size: The size of the array to be created
 * @c: The char which the array would be created of
 *
 * Return: The array
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	while (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	while (i <= size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
