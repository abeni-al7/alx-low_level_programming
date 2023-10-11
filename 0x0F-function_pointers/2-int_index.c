#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to a function that compares values
 * Return: index of the first element for which cmp doesn't return 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL))
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
