#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointing to a string of 0 to 1 chars
 *
 * Return: The converted number or if there's an error
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char c;
	int digit, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != 0; len++)
	{
		c = b[len];
		if (c != '0' && c != '1')
			return (0);

		digit = c - '0';
		result = (result << 1) | digit;
	}

	return (result);
}
