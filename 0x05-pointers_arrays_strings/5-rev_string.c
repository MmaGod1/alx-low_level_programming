#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int len, i, j;
	char rev;


	for (len = 0; s[len] != '\0'; len++)
	;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		i++;
		j--;
	}
}
