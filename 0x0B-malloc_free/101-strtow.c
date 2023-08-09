#include "main.h"
#include <stdlib.h>

/**
 * word_len - Calculates the length of chars in a word
 * @str: The string
 *
 * Return: The length of words
 */


int word_len(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != ' ' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * word_count - Counts the number of words in a string
 * @str: The string
 *
 * Return: The number of words
 */


int word_count(char *str)
{
	int words = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] != ' ' && (str[i + 1] != ' ' || str[i + 1] != '\0'))
		{
			i++;
		}
		if (str[i] == ' ')
		{
			words++;
		}
		i++;
	}
	return (words + 1);
}

/**
 * strtow - Splits a string into words
 * @str: The string
 *
 * Return: A pointer to an array of strings
 */


char **strtow(char *str)
{
	char **a;
	int count = word_count(str);
	int i = 0, k, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	a = malloc(sizeof(char *) * (count + 1));

	if (a == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		int len = word_len(&str[i]);

		a[i] = malloc(sizeof(char) * (len + 1));

		if (a[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}

		for (l = 0; l < len; l++)
		{
			a[i][l] = str[i];
		}
		a[i][l] = '\0';
		i++;
	}
	a[count] = NULL;

	return (a);
}
