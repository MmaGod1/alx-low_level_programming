#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * separatwd by commas and spaces
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);

			if (num1 < 56 ||  num2 < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
