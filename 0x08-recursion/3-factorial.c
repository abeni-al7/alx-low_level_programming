#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number
 * Return: factorial of n
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
