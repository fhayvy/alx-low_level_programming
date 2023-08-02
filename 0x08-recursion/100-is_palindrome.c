#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: The string
 *
 * Return: An Integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * check_palindrome - Checks if a string is a palindrome
 *
 * @s: The string
 * @left: The left index
 * @right: The right index
 *
 * Return: An Integer
 */

int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, (left + 1), (right - 1)));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - The wrapper function for check_palindrome
 * @s: The string
 *
 * Return: 1 if string is a palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}
