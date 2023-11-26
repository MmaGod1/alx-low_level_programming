#include <stdio.h>
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int one = 1;
	char *ch = (char *) &one;

	return (*ch);
}
