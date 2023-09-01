#include "main.h"


/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @index: The index starting from 0
 * @n: The set of bits
 *
 * Return: 1 if it worked or -1 if there was an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
