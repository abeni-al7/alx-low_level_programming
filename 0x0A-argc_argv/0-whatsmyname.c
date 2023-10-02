#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i] + '0');
		i++;
	}

	return (0);
}
