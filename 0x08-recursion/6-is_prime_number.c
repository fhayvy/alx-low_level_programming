#include "main.h"

/**
 * prime_checker - Checks if a number is a prime number
 * @n: The number
 * @i: The number of iterations
 *
 * Return: 1 if the number is a prime number and 0 otherwise
 */

int prime_checker(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (prime_checker(n, (i + 1)));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number
 *
 * Return: 1 if the number is a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}
