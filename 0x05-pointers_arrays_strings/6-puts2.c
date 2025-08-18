#include "main.h"

/**
 * puts2 - prints the first and any other char of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
