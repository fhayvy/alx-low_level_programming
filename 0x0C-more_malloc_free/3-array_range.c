#include "main.h"
#include <stdlib.h>


/**
 * array_range - Creates an array of integers
 * @min: The minimum integer in the array
 * @max: The maximum integer in the array
 *
 * Return: The pointer to the newly created array
 */


int *array_range(int min, int max)
{
	int i = 0;
	int elements;
	int *array;

	if (min > max)
		return (NULL);
	elements = max - min + 1;

	array = malloc(sizeof(int) * elements);

	if (array == NULL)
		return (NULL);

	while (i < elements)
	{
		array[i] = min++;
		i++;
	}

	return (array);
}
