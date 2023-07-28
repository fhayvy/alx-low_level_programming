#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @str: The string
 *
 * Return: an array of characters
 */

char *cap_string(char *str)
{
	char *ptr = str;

	while (*str != '\0')
