#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);
	putchar('\n');
	return (0);
}
