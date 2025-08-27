#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - counts the number of words in a string.
 * @str: the string.
 *
 * Return: the words counted.
 */
int count_words(char *str)
{
	int i = 0, words = 0;
	int in_word = 0;

	while (str[i])
	{
		if (str[i] != ' ' && !in_word)
		{
			words++;
			in_word = 1;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
		i++;
	}
	return (words);
}
/**
 * copy_word - creates a new string from part of another string.
 * @str: the original string.
 * @start: starting index of the word in the string.
 * @len: length of the word to copy.
 *
 * Return: a pointer to the newly allocated word (null-terminated),
 * or NULL if memory allocation fails.
 */
char *copy_word(char *str, int start, int len)
{
	char *word = malloc(sizeof(char) * (len + 1));
	int i;

	if (!word)
		return (NULL);
	for (i = 0; i < len; i++)
		word[i] = str[start + i];
	word[len] = '\0';
	return (word);
}

/**
 * strtow - splits a string into words.
 * @str: string to split.
 *
 * Return: a pointer to an array of strings (words)
 * and null if the function fails.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, start, len, w = 0, num_words;

	if (!str || !str[0])
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));
	if (!words)
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!str[i])
			break;

		start = i;
		len = 0;
		while (str[i] != '\0' && str[i] != ' ')
		{
			len++;
			i++;
		}
		words[w] = copy_word(str, start, len);
		if (!words[w])
		{
			while (w > 0)
				free(words[--w]);
			free(words);
			return (NULL);
		}
		w++;
	}
	words[w] = NULL;
	return (words);
}
