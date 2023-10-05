#include "main.h"

/**
 * strtow - splits a string into words
 * @str: String to be splited
 * Return: array of words of the string
 */

char **strtow(char *str)
{
	int word_count = 0; i, j, k = 0, start, length, l;
	char **words;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i = 0 || str[i - 1] == ' '))
			word_count++;
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		length = i - start;
		words[k] = (char *)malloc((length + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (l = 0; l < k; l++)
				free(words[l]);
			free(words);
			return (NULL);
		}
		strncpy(words[k], &str[start], length);
		words[k][length] = '\0';
		k++;
	}
	words[k] = NULL;

	return (words);
}
