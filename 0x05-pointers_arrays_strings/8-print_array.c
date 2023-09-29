#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - Print some amount of elements from array
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == n - 1)
		printf("%d", a[n - 1]);
	printf("\n");
}
