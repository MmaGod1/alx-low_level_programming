#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
