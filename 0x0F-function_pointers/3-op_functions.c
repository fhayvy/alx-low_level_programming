#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * op_add - Adds 2 numbers
 * @a: The first Integer
 * @b: The second Integer
 * Return: The sum of the numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Subtracts a number from another
 * @a: The first Integer
 * @b: The second Integer
 * Return: The result
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplies two numbers
 * @a: The first Integer
 * @b: The second Integer
 * Return: The result
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides a number by another
 * @a: The first Integer
 * @b: The second Integer
 * Return: The result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - returns the result when two numbers are divided
 * @a: The first Integer
 * @b: The second Integer
 * Return: The result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
