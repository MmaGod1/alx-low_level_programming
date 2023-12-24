#include "main.h"

/**
 * _strchr - locates a specific character in a string,
 * @s: the string.
 * @c: character to be located.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
