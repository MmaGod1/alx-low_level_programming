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
		str += 2;

		if (*(str + 1) == '\0')
			break;
	}
	_putchar('\n');
}
