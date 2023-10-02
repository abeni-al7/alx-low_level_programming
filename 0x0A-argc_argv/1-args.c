#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	_putchar(argc / 10 + '0');
	_putchar(argc % 10 + '0');

	return (0);
}
