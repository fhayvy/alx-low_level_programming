#include "main.h"


/**
 * flip_bits - Returns the number of bits you would
 *		need to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;

	unsigned int count = 0;

	while (result != 0)
	{
		if (result & 1)
		{
			count++;
		}
		result >>= 1;
	}

	return (count);
}
