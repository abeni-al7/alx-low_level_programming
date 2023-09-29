#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s) - 1;

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
