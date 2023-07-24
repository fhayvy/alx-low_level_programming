#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: The first Integer
 * @b: The second Integer
 *
 */

void swap_int(int *a, int *b)
{
	int a_to_b;

	a_to_b = *a;
	*a = *b;
	*b = a_to_b;
}
