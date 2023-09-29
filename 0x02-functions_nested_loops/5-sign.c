#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: number to check
 * Return: 1 if n is positive, 0 if n is 0 and -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
