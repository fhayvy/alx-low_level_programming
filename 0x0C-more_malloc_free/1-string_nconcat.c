#include "main.h"
#include <stdlib.h>


/**
 * str_len - Calculates the length of a string
 * @str: The string
 *
 * Return: An integer
 */

int str_len(char *str)
{
	int words = 0;

	while (str[words] != '\0')
	{
		words++;
	}
	return (words);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: An unsigned integer
 *
 * Return: A pointer to a newly alocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int s1_len;
	char *array;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	s1_len = str_len(s1);

	array = malloc((sizeof(char) * (s1_len + n + 1)));

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; s2[i] != '\0' && j <= n; j++)
	{
		array[i] = s2[j];
		i++;
	}
	array[i] = '\0';
	return (array);
}
