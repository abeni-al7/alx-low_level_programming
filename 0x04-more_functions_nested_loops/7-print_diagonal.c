#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draw a diagonal
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			j = 0;
		}
	}
}
