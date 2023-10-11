#include "3-calc.h"

/**
 * op_add - compute sum
 * @a: operand 1
 * @b: operand 2
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - compute difference
 * @a: operand 1
 * @b: operand 2
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - compute product
 * @a: operand 1
 * @b: operand 2
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the quotient of a and b
 * @a: operand 1
 * @b: operand 2
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - compute the remainder of division
 * @a: operand 1
 * @b: operand 2
 * Return: the remainder of the division between a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
