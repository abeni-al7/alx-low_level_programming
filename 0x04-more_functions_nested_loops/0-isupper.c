#include <stdio.h>
#include "main.h"

/**
 * _isupper - Check for uppercase letters
 * @c: character
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
