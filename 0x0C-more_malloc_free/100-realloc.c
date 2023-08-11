#include "main.h"
#include <stdlib.h>


/**
 * _realloc - Reallocates a memory block
 *
 * @ptr: A pointer to a previously allocated memory
 * @old_size: The size in bytes of the previous allocated space
 * @new_size: The new size
 *
 * Return: A pointer to the new space in memory
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;
	unsigned int i;

	if (ptr == NULL)
	{
		array = malloc(new_size);

		if (array == NULL)
			return (NULL);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	array = malloc(new_size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		((char *)array)[i] = ((char *)ptr)[i];

	free(ptr);
	return (array);
}
