#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print upto 98
 * @n: Starting point
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
