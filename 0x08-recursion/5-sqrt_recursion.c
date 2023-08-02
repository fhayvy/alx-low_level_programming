#include "main.h"

/**
 * square_root - Checks if an integer is the root of a number
 * @n: The number
 * @root: The number being tested as root
 *
 * Return: An Integer
 */

int square_root(int n, int root)
{
	int square;

	square = root * root;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (root);
	}
	return (square_root(n, (root + 1)));
}

/**
 * _sqrt_recursion - Returns the root of an integer
 * @n: The Integer
 *
 * Return: An Integer
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
