#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 * @n: any integer value.
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
