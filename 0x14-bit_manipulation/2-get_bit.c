#include "main.h"
/**
 * get_bit - a function returns the value of a bit at a given index.
 * @n: unsigned long int which is the given input
 * @index: index of the bit starting
 * from 0 of the bit you want to get
 *
 * Return: the value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_pos;

	if (index > 32)
		return (-1);

	bit_pos = (n >> index) & 1;

	return (bit_pos);
}

