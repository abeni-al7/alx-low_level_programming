#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;
	int cents;
	int cent[5] = {25, 10, 5, 2, 1};
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < 5 && cents != 0)
	{
		if (cents >= cent[i])
		{
			num += cents / cent[i];
			cents = cents % cent[i];
		}
		i++;
	}
	printf("%d\n", num);
	return (0);
}
