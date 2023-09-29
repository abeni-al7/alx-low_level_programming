#include "main.h"

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i;
	int len = 0;

	if (*s == '\0')
		return (1);

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (check(s, 0, len));
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
