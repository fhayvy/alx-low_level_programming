#include "main.h"

/**
 * *string_toupper- Changes lowercase of a string to uppercase
 * @str: The string
 *
 * Return: Uppercase Character
 *
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}
