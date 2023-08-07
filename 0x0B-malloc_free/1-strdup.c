#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * _strdup - Points to a newly allocated space in memory
 * @str: The string given as parameter
 *
 * Return: A pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *array;
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	array = (char *)malloc(sizeof(char) * (l + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < l)
	{
		array[i] = str[i];
		i++;
	}
	return (array);
}
