#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j = 0;
		}
	}
}
