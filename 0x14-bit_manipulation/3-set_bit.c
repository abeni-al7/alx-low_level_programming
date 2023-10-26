#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: pointer to a number
 * @index: index to set the bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if(index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return(1);
}
