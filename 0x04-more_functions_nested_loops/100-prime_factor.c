#include <stdio.h>
/**
 * main - prints the prime factors of a number,
 * especially the largest prime factor
 *
 * @num: parameter of the prime factor function
 * Return: Always 0.
 */

void  prime_factors(long num);

int main(void)
{
	prime_factors(612852475143);
	return (0);
}

/**
 * prime_factors - prints prime factors
 * @num: has the value 612852475143
 *
 * Description: the function prints the prime factors of
 * 612852475143 and the largest prime factor
 */

void  prime_factors(long num)
{
	long i;

	for (i = 3; num > 1; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%ld\n", i - 1);
}
