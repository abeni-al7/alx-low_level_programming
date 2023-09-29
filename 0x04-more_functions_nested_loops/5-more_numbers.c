#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print numbers 10 times
 */

void more_numbers(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 10; i++)
	{
		while (n < 15)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		n = 0;
	}
}
