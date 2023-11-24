#include "main.h"

/**
 * _strncpy - imitates strncpy function
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes to copy from src.
 * Return: returns pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	for (; d < n; d++)
	{
		dest[d] = '\0';
	}
	return (dest);
}
