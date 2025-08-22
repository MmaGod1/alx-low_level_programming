#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (match);
	}
	return (match);
}
