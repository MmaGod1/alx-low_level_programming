#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: points to string.
 * Return: returns string length.
 */
int _strlen(char *s)
{
	int len = 0;

	for (len = 0; *(s + len) != '\0'; len++)
		;
	return (len);
}
