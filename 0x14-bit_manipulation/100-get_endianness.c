#include "main.h"



/**
 * get_endianness - Describes the order in which a sequence of bit is stored in memory
 *
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
