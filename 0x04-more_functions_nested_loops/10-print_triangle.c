#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int spaces;
	int i = 0;

	if (size > 0)
	{
		while (size > 0)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
