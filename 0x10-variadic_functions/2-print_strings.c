#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - Prints strings
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n > 0)
	{

		va_start(args, n);

		while (i < n)
		{
			str = va_arg(args, char *);

			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
