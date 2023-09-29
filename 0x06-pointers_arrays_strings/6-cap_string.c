#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i;
	int length = strlen(s);

	if (s[0] > 'a' && s[0] < 'z')
		s[0] -= 32;
	for (i = 0; i < length; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.')
		{
			if (s[i + 1] < 'z' && s[i + 1] > 'a')
				s[i + 1] -= 32;
		}
	}
	return (s);
}
