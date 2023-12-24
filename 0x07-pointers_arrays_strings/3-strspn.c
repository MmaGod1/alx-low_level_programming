#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	while (s[i] != '\0' && accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
		i++, j++;
	}
	if (accept[j] == '\0')
		return (count);
	return (count);
}
