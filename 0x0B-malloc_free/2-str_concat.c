#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to tbe concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	cat = malloc(sizeof(char) * (i + j + 1));

	if (cat  == NULL)
	{
		free(cat);
		return (NULL);
	}

	i = j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		cat[i + j] = s2[j];

	return (cat);
}
