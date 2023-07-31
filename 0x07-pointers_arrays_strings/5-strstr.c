#include <stdio.h>

/**
 * _strstr - Locates a substring
 *
 * @haystack: The String
 * @needle: The substring
 *
 * Return: A pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
		{
			return (a);
		}
		haystack = a + 1;
	}
	return (0);
}
