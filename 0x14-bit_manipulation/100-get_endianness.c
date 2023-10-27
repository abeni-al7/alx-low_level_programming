#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big or 1 if little
 */

int get_endianness(void)
{
	int n = 1;
	char *num = (char *)&n;

	if (*num)
		return (1);
	else
		return (0);
}
