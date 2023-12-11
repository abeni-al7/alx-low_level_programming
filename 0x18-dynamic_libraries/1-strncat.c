#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings to some extent
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
		dest_end++;
	while (*src != '\0' && n > 0)
	{
		*dest_end++ = *src++;
		n--;
	}
	*dest_end = '\0';
	return (dest);
}
