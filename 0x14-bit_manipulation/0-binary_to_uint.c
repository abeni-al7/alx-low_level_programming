#include "main.h"

/**
 * binary_to_uint - converts binary to a positive integer
 * @b: string containing the binary
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len, i, pow;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			pow = len - 1 - i;
			decimal += (1 << pow);
		}
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}

	return (decimal);
}
