#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, I;

	while (haystack[i] != '\0')
	{
		I = i;
		/* Store the initial position of haystack */
		j = 0;
		/* set j to 0 for each i iteration */

		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + I);
			/* Substring found, return pointer to the start */
		}
		i = I + 1;
		/* Move to the next character in haystack for next iteration */
	}
	return (NULL);
	/* when substring is not found */
}
