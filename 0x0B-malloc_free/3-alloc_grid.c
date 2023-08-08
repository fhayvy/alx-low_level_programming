#include "main.h"
#include <stdlib.h>


/**
 * **alloc_grid - initializes a 2D array with an element
 *
 * @width: Represents the rows of the array
 * @height: Represents the column
 *
 * Return: A pointer to the 2D array
 */


int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
