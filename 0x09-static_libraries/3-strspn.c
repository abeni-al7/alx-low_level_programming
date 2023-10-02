#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to span
 * @accept: number of bytes to find
 * Return: number of bytes of s which contain bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len1 = strlen(s);
	int len2 = strlen(accept);
	unsigned int n = 0;
	bool match;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				match = true;
				n++;
				break;
			}
			match = false;
		}
		if (!match)
			break;
	}
	return (n);
}
