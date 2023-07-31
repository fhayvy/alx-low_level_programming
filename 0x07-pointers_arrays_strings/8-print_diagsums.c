#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals
 * @a: The array
 * @size: The row and column of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diagonal_1 = 0;
	int diagonal_2 = 0;

	while (i < size)
	{
		diagonal_1 += a[(i * size) + i];
		diagonal_2 += a[(i * size) + (size - 1 - i)];
	i++;
	}
	printf("%d,%d\n", diagonal_1, diagonal_2);
}
