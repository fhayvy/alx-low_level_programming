#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - Prints a name
 * @name: The name of the person
 * @f: A function pointer
 *
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
