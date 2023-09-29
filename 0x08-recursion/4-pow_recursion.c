#include "main.h"

/**
 * _pow_recursion - performs exponent operation
 * @x: base
 * @y: exponent
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
