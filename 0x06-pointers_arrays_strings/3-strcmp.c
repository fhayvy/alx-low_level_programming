#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return:An Integer
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int result = *s1 - *s2;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (s1[index] != s2[index])
		{
			return (result);
		}
		else if (*s1 == *s2)
		{
			result = 0;
			return (result);
		}
	s1++;
	s2++;
	}
	return (result);
}
