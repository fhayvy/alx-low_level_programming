#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - Prints anything
 * @format: The conversion specifier to prints
 *
 * Return: Void
 */


void print_all(const char * const format, ...)
{
	va_list args;

	fptr form_types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char_ptr}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}


/**
 * print_char - Prints a character
 * @separator: The char separator
 * @args: A list of variadic arguments
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}


/**
 * print_integer - Prints an integer
 * @separator: The integer separator
 * @args: A list of variadic arguments
 */

void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}


/**
 * print_float - Prints a float
 * @separator: The float separator
 * @args: A list of variadic arguments
 */

void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}


/**
 * print_char_ptr - Prints the chracter of a pointer
 * @separator: The separator
 * @args: A list of variadic arguments
 */

void print_char_ptr(char *separator, va_list args)
{
	char *a = va_arg(args, char *);

	if (a == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, a);
}
