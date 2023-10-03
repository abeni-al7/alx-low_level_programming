#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: initializing character
 * Return: pointer to the array created or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for(i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
