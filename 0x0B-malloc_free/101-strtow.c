#include "main.h"

/**
 * strtow - splits a string into words
 * @str: String to be splited
 * Return: array of words of the string
 */

char **strtow(char *str)
{
	int i = 0, k = 0, j = 0, len, num = 0;
	char **words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (k > 0)
				num++;
			k = 0;
		}
		else
			k++;
	}
	if (k > 0)
		num++;

	words = malloc((num + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;
	len = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if (len > 0)
			{
				words[k] = malloc((len + 1) * sizeof(char));
				if (words[k] == NULL)
				{
					for (j = 0; j < k; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}
				strncpy(words[k], &str[i - len], len);
				words[k][len] = '\0';
				k++;
				len = 0;
			}
		}
		else
			len++;
		i++;
	}
	if (len > 0)
	{
		words[k] = malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		strncpy(words[k], &str[i - len], len);
		words[k][len] = '\0';
		k++;
	}
	words[k] = NULL;

	return (words);
}


