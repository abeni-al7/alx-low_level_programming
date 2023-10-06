#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *str;

	if (n >= strlen(s2))
		n = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc((strlen(s1) + n + 1 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
