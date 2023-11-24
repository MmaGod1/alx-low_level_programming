#include "main.h"

/**
 * leet - encodes a string with 1337 $p3@k style
 * @str: input string.
 * Return: the pointer to str.
 */

char *leet(char *str)
{
	int count = 0, i;
	char lcase[] = {'a', 'e', 'o', 't', 'l'};
	int num[] = {4, 3, 0, 7, 1};

	while (str[count] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[count] == lcase[i] || str[count] == lcase[i] - 32)
			{
				str[count] = num[i] + '0';
			}
		}
		count++;
	}

	return (str);
}
