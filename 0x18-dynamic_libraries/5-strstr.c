#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the first occurence of a byte in needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (strlen(needle) == 0)
		return (haystack);
	while (*haystack)
	{
		int i = 0;
		bool match = true;

		while (needle[i] != '\0')
		{
			if (haystack[i] != needle[i])
			{
				match = false;
				break;
			}
			i++;
		}
		if (match)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
