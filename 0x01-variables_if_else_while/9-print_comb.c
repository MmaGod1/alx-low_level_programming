#include <stdio.h>

/**
 * main - print combination of numbers
 *
 * Description: print single digit numbers with commas and space
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
