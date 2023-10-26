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

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	while (i < index)
	{
		n >>= 1;
		i++;
	}
	if (n & 1)
		return (1);
	else
		return (0);
}
