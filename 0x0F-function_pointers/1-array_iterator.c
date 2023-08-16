#include "function_pointers.h"
#include <stddef.h>


/**
 * array_iterator - Executes a function for every element in an array
 * @array: The array
 * @size: The size of the array
 * @action: The function pointer
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
