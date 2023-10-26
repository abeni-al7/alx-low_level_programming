#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number
 * @index: index
 * Return: the value of the bit at index of n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		n >>= 1;
		i++;
	}
	if (n == 0)
		return (-1);
	else if (n & 1)
		return (1);
	else
		return (0);
} 

