#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n: input number.
 * @r: root of numbers.
 * Return: square root or -1 for unnatural numbers.
 */
int _sqrt(int n, int r)
{
	if (r * r == n)
		return (r);

	if (r * r > n)
		return (-1);

	return (_sqrt(n, r + 1));
}
/**
 * _sqrt_recursion - calls the _sqrt function.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}
