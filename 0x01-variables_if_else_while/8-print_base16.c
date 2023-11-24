#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char lc;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
