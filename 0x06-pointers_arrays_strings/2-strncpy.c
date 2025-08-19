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

	for (d = 0; d < n; d++)
	{
		if (src[d] != '\0')
			dest[d] = src[d];
		else
		{
			 /* pad with null bytes if src is shorter than n */
			 dest[d] = '\0';
		}
	}
	return (dest);
}
