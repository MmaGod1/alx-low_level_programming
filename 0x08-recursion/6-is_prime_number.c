#include "main.h"

/**
 * prime_check - detects if an input number is a prime number.
 * @n: input number.
 * @i: checks if n is prime or not.
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int prime_check(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime_check(n, i + 1));
}

/**
 * is_prime_number - calls prime_check function if some conditions aren't met.
 * @n: input number.
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_check(n, 2));
}
