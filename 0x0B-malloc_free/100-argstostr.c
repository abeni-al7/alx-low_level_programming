#include "main.h"

/**
 * argstostr - concatenates arguments of a program
 * @ac: argument count
 * @av: array of arguments
 * Return: pointer to the new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
