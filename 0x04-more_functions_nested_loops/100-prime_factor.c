#include <stdio.h>
/**
 * main - prints the prime factors of a number,
 * especially the largest prime factor
 *
 * @num: parameter of the prime factor function
 * Return: Always 0.
 */

int main(void)
{
	long n = 612852475143;
	long factor = 2;
	long largest_factor = 0;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			largest_factor = factor;
			n /= factor;

			while (n % factor == 0)
				n /= factor;
		}
		factor++;
	}
	printf("%ld\n", largest_factor);
	return (0);
}
