#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two integers.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtraction operation
 * @a: first integer
 * @b: second integer
 * Return: difference of the two integers.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - mutiply to numbers
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two numbers
 * @a: first integer
 * @b: second integer
 * Return: quotient of the two integers.
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	return (0);
}

/**
 * mod - finds the remainder of a number
 * @a: first integer
 * @b: second integer
 * Return: remainder of the two integers.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (0);
}
