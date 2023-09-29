#include <stdio.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: integer
 * Return: absolute value of n
 */

int _abs(int n)
{
	int result = 0;

	if (n >= 0)
	{
		result = n;
		return (result);
	}
	else
	{
		result = (n * 2) / -2;
		return (result);
	}
}
