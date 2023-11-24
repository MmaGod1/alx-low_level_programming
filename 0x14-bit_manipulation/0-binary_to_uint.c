#include "main.h"
/**
 * binary_to_uint - function to convert binary number to an unsigned int
 * @b: pointer to a binary
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int int_val = 0;
	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		int_val = (int_val << 1) | (b[i] - '0');
	}
	return (int_val);
}
