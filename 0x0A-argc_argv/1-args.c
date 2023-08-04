#include <stdio.h>

/**
 * main - Entry point
 * @argc: The size of argv array
 * @argv: The command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);
}
