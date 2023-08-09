#include "main.h"
#include <stdlib.h>


/**
 * strtow - Splits a string into words
 *
 * @str: The string
 * Return: A pointer to an array of strings
 */

int words_len(char *str)
{
	int words = 0, i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && (str[i + 1] != ' ' || str[i + 1] != '\0'))
		{
			words++;
		}
		i++;
	}
	return (words);
}


	
char **strtow(char *str)
{
	char **a;

	if (str == NULL || *str == '\0')
		return NULL;
	a = malloc(sizeof(char *) * (words_len + 1));

	if (a == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
	
	}

	return (a);
}
