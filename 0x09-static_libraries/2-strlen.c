#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}
