#include "main.h"

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check(s, 0, strlen(s)));
}

/**
 * check - check for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check(s, i + 1, len - 1));
}
