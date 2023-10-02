#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: character to check
 * Return: 1 if successful 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
