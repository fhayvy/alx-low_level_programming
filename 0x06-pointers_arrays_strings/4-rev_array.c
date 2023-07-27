#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Points to the first element of the array
 * @n: The number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int new = a[start];
		a[start] = a[end];
		a[end] = new;

		start++;
		end--;
	}
}
