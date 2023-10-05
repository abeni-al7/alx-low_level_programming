#include "main.h"

/**
 * strtow - splits a string into words
 * @str: String to be splited
 * Return: array of words of the string
 */

char **strtow(char *str)
{
	int i = 0, k = 0, j = 0, len, num = 0, l;
	char **words;
	char *temp;

	if (str == NULL || strcmp(str, "") == 0, strcmp(str, " "))
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			num++;
		}
	}

	words = malloc((num + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(words);
		return (NULL);
	}

	k = 0;
	for (i = 0; temp[i] != '\0'; i++)
	{
		while (temp[i] == ' ')
			i++;

		len = 0;
		for (j = i; temp[j] != ' ' && temp[j] != '\0'; j++)
			len++;

		words[k] = malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (l = 0; l < k; l++)
				free(words[l]);
			free(words);
			free(temp);
			return (NULL);
		}
		strncpy(words[k], &temp[i], len);
		words[k][len] = '\0';
		k++;
		i = j;
	}
	words[k] = NULL;
	free(temp);

	return (words);
}
