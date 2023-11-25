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
	int shift = 1 << index;
	unsigned int position = (n & shift) >> index;

	return position;
}
