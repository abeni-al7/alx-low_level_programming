#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String
 */

void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int n_even = length / 2;
	int n_odd = ((length - 1) / 2) + 1;

	if (length % 2 == 0)
	{
		for (i = n_even; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = n_odd; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
