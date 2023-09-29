#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String
 */

void puts2(char *str)
{
	int i;
	int length = strlen(str) - 1;

	for (i = 0; i <= length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
