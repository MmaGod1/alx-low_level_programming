#include "shell.h"

/**
 * _strcpy - Copy Source to destination Char
 * @dest: Destination
 * @src: Source
 *
 * Reurn: Copy of Char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - Concatenate two string
 * @dest: First String
 * @src: Second String
 *
 * Return: First string + Second String
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
/**
 * _strchr - Locate Character in String
 * @s: String to search in
 * @c: Char to search for
 *
 * Return: Pointer to Char*
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while (*s++);
	return (s);
}
/**
 * _strncmp - Compare amount (n) of characters of two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Amount of characters to compare.
 *
 * Return: 1 if the strings don't match, otherwise 0
 */
int _strncmp(const char *s1, const char s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * _strdup -Duplicate A string
 * @str: String to be duplicated
 *
 * Return: Duplicate string, otherwise Null
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *str2;

	len = _strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
