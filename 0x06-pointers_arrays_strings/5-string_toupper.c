#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s: string
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
