#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character
 *
 * Return: 1 if successful and -1 if otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
