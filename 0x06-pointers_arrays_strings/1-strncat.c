#include "main.h"
/**
 * _strncat - concatenates two strings with n bytes from src
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, sr;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[sr] != '\0' && n > 0)
	{
		dest[d] = src[sr];
		d++;
		sr++;
		n--;
	}
	return (dest);
}
