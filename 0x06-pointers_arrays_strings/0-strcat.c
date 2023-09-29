#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int ld = strlen(dest);
	int j = ld;
	int ls = strlen(src);
	int length = ld + ls;

	while (j <= length)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
