#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copy a string to its destination
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = strlen(src);

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
