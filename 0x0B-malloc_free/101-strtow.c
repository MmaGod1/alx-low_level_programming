#include <stdlib.h>
#include "main.h"

/**
 * delimiter - checks for word seperatorsi(delimiters).
 * @c: character to be checked
 * @delim: string containing delimiters.
 *
 * Return: 0.
 */
int delimiter(char c, char *delim)
{
	while (*delim)
	{
		if (c == *delim)
			return (1);
		delim++;
	}
	return (0);
}

/**
 * strtow -splits a string into words.
 * @str: string to split.
 *
 * Return: a pointer to an array of strings (words)
 * and null if the function fails.
 */
char **strtow(char *str)
{
	int i, j, len, word_count, word_index, word_length;
	char **words = NULL, *delim = " .,;";

	if (str == NULL || str[0] == '\0')
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	word_count = 0;
	for (i = 0; i < len; i++)
	{
		if (!delimiter(str[i], delim) && (i == 0 || delimiter(str[i - 1], delim)))
			word_count++;
	}
	word_index = 0;
	word_length = 0;
	for (i = 0; i <= len; i++)
	{
		if (!delimiter(str[i], delim) && (i == 0 || delimiter(str[i - 1], delim)))
		{
			words[word_index] = malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
				return (NULL);

			j = 0;
			while (!delimiter(str[i], delim) && str[i] != '\0')
				words[word_index][j++] = str[i++];
		words[word_index][j] = '\0';
		word_index++;
		word_length = 0;
		}
		else
		{
			word_length++;
		}
	}
	words[word_index] = NULL;
	return (words);
}
