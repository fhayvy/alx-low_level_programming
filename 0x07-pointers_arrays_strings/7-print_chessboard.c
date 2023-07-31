#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 *
 * @a: The number of rows
 */

void print_chessboard(char (*a)[8])
{
	int m = 0;
	int n;

	while (m < 8)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
		m++;
	}
}
