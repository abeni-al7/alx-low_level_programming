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
	unsigned char *start;
	size_t bytes;
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
	bytes = (size_t)size;
	start = (unsigned char *)&main;
	for (i = 0; i < size; i++)
		printf("%02x ", start[i]);
	printf("\n");

	return (0);
}
