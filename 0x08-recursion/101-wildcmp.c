#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string and ignores *
 * @s: The string
 *
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	if (*s == '*')
	{
		return (_strlen_recursion(s + 1));
	}
	s++;
	return (_strlen_recursion(s) + 1);
}


/**
 * iterate_wild - Moves the current pointer of a string from a wildcard
 *			character till it points to a non-wild character
 * @wildstr: A pointer which points to a char in the string
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}


/**
 * postfix_match - Checks if a string matches the postfix of
 *			another string
 * @str1: The string
 * @str2_postfix: The postfix
 *
 * Return: If they are identical, it returns a pointer to the
 *		null byte located at the end of postfix
 */

char *postfix_match(char *str1, char *str2_postfix)
{
	int str_1_len = _strlen_recursion(str1) - 1;
	int str2_len = _strlen_recursion(str2_postfix) - 1;

	if (*str2_postfix == '*')
	{
		iterate_wild(&str2_postfix);
	}
	if (*(str1 + str_1_len - str2_len) == *str2_postfix && *str2_postfix != '\0')
	{
		str2_postfix++;
		return (postfix_match(str1, str2_postfix));
	}
	return (str2_postfix);
}


/**
 * wildcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string - might contain wildcards
 *
 * Return: 1 if the strings are identical and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}
