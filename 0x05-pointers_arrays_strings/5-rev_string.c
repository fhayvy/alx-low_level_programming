#include "main.h"

/**
 * rev_string - Entry point
 * @s: The string
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		char temp_char = *start;
		*start = *end;
		*end = temp_char;

		start++;
		end--;
	}
}
