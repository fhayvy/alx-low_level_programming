#include "function_pointers.h"


/**
 * int_index - Searches for an index
 * @cmp: A pointer to the function
 * @size: The number of elements in the array
 * @array: The array
 *
 * Return: An integer
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
