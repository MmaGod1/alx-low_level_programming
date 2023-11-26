#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = n ^ m;
	int count_bits = 0;

	while (diff)
	{
		count_bits += diff & 1;

		diff >>= 1;
	}
	return (count_bits);
}
