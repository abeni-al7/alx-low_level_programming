#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int sizeChar = sizeof(char);
	int sizeInt = sizeof(int);
	int sizeLI = sizeof(long int);
	int sizeLLI = sizeof(long long int);
	int sizeFloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", sizeChar);
	printf("Size of an int: %d byte(s)\n", sizeInt);
	printf("Size of a long int: %d byte(s)\n", sizeLI);
	printf("Size of a long long int: %d byte(s)\n", sizeLLI);
	printf("Size of a float: %d byte(s)\n", sizeFloat);

	return (0);
}
