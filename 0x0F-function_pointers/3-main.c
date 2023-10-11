#include "3-calc.h"

/**
 * main - perform computations
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int (*f)(int, int);
	int num1, num2, result;
	char *operator;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operator = av[2];
	f = get_op_func(operator);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
