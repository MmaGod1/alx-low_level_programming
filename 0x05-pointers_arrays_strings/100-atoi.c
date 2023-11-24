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
	unsigned int count, sign, result;

	count = 0;
	sign = 1;
	result = 0;

	while (s[count] != '\0' && (s[count] < '0' || s[count] > '9'))
	{
		if (s[count] == '-')
		{
			sign *= -1;
		}
		count++;
	}

	while (s[count] >= '0' && s[count] <= '9')
	{
		result = result * 10 + (s[count] - '0');
		count++;
	}
	return (result * sign);
}
