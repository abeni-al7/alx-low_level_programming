#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
