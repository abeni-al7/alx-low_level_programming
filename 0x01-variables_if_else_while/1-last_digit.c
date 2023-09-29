#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	printf("Last digit of %d is %d and is ", n, ld);
	if (ld > 5)
		printf("greater than 5");
	if (ld == 0)
		printf("0");
	if ((ld < 6) && (ld != 0))
		printf("less than 6 and not 0");
	printf("\n");

	return (0);
}
