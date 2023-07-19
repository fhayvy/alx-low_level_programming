#include "main.h"

/**
 * _abs - gets the absolute value of an integer
 *
 * @n: The integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
