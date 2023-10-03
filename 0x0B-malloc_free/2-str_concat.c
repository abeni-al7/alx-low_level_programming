#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;

	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	i = 0;

	str = malloc((len1 + len2) * sizeof(char) + 1);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
