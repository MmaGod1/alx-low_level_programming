#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int count = 0, index = 0;

	while (str[n] != '\0')
	{
		count++;
	}

	index = (count + 1) / 2;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
