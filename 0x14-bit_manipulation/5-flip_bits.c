#include "main.h"

/**
 * flip_bits - returns the number of bits that should be flipped to get from n to m
 * @n: number
 * @m: number
 * Return: the number of bits that should be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor;

	xor = n ^ m;
	for (count = 0; xor != 0; xor >>= 1)
	{
		if (xor & 1)
			count++;
	}

	return (count);
}
