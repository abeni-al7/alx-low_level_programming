#include "main.h"

/**
 * main - multiplies two numbers
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	unsigned long int num1, num2, mul;
	int i, j;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; av[1][i] != '\0'; i++)
	{
		if (isdigit(av[1][i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0; av[2][j] != '\0'; j++)
	{
		if (isdigit(av[1][j]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
