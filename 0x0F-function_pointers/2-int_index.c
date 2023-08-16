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

