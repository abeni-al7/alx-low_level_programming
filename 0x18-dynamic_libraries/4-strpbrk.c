#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes to look for
 * Return: pointer to first occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
		return (NULL);
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (NULL);
}
