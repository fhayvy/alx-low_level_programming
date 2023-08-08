#include "main.h"
#include <stdlib.h>


/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to a new space in memory which contains the
 *		contents of s1 followed by s2 and NULL on failure.
 */


char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *a;
	int length = 0, i, j;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	length = len1 + len2 + 1;

	a = malloc(sizeof(char) * length);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';

	return (a);
}
