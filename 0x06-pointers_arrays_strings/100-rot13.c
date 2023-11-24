#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to dest
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
