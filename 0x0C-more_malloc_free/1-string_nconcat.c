#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes grom s2 to concatenate.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, exit with 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat_str;
	unsigned int s1_len, s2_len, t_len, i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (n > s2_len)
		n = s2_len;

	t_len = s1_len + n;

	cat_str = malloc(t_len + 1);

	if (cat_str == NULL)
		return (NULL);

	for (i = 0; i < t_len; i++)
	{
		if (i < s1_len)
			cat_str[i] = s1[i];
		else
		{
			cat_str[i] = s2[j];
			if (j < n)
				j++;
		}
	}

	cat_str[i] = '\0';

	return (cat_str);
}
