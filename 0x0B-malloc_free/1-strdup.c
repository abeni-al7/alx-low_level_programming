#include "main.h"

/**
 * _strdup - allocate a new space in memory which contains a specified string
 * @str: specified string
 * Return: pointer to the allocated memory containing a copy of str or NULL
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	duplicate = malloc((len * sizeof(char)) + 1);
	if (duplicate == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';

	return (duplicate);
}
