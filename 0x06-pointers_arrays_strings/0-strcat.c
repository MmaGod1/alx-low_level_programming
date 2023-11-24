#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: pointer to a destinatio
 * @src:  pointer to a source
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int src_count, dest_count;

	for (dest_count = 0; dest[dest_count] != '\0'; dest_count++)
		;
	for (src_count = 0; src[src_count] != '\0'; src_count++)
	{
		dest[dest_count] = src[src_count];
		dest_count++;
	}
	dest_count = '\0';
	return (dest);
}
