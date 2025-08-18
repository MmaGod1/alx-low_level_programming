#include "main.h"
/**
 * _atoi - This converts a string to an integer
 * @s: pointer to strings
 *
 * Description: it skips non-numerical characters,
 * returns 0 for space
 * Return: it returns an integer
 */
int _atoi(char *s)
{
	unsigned int index, sign, num;

	index = 0;
	sign = 1;
	num = 0;

	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9'))
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		num = num * 10 + (s[index] - '0');
		index++;
	}
	return (sign * num);
}
