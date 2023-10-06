#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array or NULL
 */

int *array_range(int min, int max)
{
	int *arr, num, i;

	if (min > max)
		return (NULL);
	num = (max - min) + 1;
	arr = malloc(num * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
