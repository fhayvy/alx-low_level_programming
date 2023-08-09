#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *argstostr - Concatenates all the arguments of your program
 *
 * @ac: The size of the array
 * @av: An array of program command line arguments
 *
 * Return: A pointer to a new string
 */


char *argstostr(int ac, char **av)
{
	char *a;
	int i = 0, len = 0, k = 0;
	int j = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
		j = 0;

	}
	a = malloc((sizeof(char) * len) + (ac + 1));
	i = 0;

	if (a == NULL)
	{
		return (NULL);
	}
	while (av[i])
	{
		while (av[i][j])
		{
			a[k] = av[i][j];
			j++;
			k++;
		}
		a[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	a[k] = '\0';
	return (a);
}
