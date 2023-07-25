#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of Integers
 * * @a: The array
 * @n: The number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
}
