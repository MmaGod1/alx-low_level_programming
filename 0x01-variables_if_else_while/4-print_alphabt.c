#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for e and q.
 *
 * neq: no e q
 * Return: Always 0.
 */
int main(void)
{
	char neq;

	for (neq = 'a'; neq <= 'z'; neq++)
	{
		if (neq != 'e' && neq != 'q')
		putchar(neq);
	}
	putchar('\n');

	return (0);
}
