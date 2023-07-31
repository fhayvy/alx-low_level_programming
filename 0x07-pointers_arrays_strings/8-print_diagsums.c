#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals
 * @a: The array
 * @size: The row and column of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int diagonal_1 = 0;
	int diagonal_2 = 0;

	while (i < size)
	{
		while (j < size)
		{
			if (i == j)
			{
				printf
