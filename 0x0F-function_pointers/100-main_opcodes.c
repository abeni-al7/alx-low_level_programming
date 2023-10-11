#include "function_pointers.h"

void print_opcodes(int num_bytes);

/**
 * main - entry point
 * @ac: argument count
 * @av: array of arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	char *arr;
	int size, i = 0;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(av[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}

	return (0);
}
