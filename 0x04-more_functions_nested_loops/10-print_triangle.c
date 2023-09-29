#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j = 0;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i > 0; i--)
		{
			while (j < i - 1)
			{
				_putchar(' ');
				j++;
			}
			for (k = size; k > j; k--)
			{
				_putchar('#');
			}
			k = 0;
			j = 0;
			_putchar('\n');
		}
	}
}


