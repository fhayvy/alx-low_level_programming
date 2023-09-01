#include "main.h"


/**
 * clear_bit - Sets the value of abit to 0
 * @n: A string of bits
 * @index: The index at which the bit is set to 0
 *
 * Return: 1 if it worked and -1 if there was an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	mask = ~mask;

	*n = (*n) & mask;

	return (1);
}
