#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;

	while (len > 0)
	{
		_putchar(s[len - 1]);
	}
	_putchar('\n');
}
