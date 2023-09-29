#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print all digits
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
