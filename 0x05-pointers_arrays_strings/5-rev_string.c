#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int start = 0, end;
	char temp;


	for (end = 0; s[end] != '\0'; end++)
	;

	end--;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
