#include "shell.h"

/**
 * _putchar - Writes the character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 if fail and set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strncpy - copy a string
 * @dest: where to copy char to
 * @src: source
 * @n: int
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\n';
		i++;
	}
	return (dest);
}
/**
 * _strlen - lenght of string
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}
/**
 * _atoi - convert to an int
 * @s: string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, j, n, x;

	i = n = 0;
	x = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1
				i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = (n * 10) + x * ((s[j]) - '0');
		j++;
	}
	return (n);
}
/**
 * _puts - print a string
 * @str: pointer char
 *
 * Return: void
 */
void _put(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
