#include "main.h"

/**
 * _pow_recursion - Returns the function of an integer to anothe integer
 *
 * @x: The integer to be multiplied by itself
 * @y: The number of times x would be multiplied
 *
 * Return: An Integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
