#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while (i < 10)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
		alpha = 'a';
	}
}
