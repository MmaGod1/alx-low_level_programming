#include "main.h"

/**
 * puts2 - prints the first and any other char of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		if (*(str + 1) == '\0')
			break;

		str += 2;
	}
	_putchar('\n');
}
