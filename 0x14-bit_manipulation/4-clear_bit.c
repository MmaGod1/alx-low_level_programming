#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: points to an unsigned long int.
 *  @index: position of the bit.
 *
 *  Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
