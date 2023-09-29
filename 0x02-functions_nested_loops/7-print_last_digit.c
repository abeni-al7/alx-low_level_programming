#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: number
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}

	return (x);
}
