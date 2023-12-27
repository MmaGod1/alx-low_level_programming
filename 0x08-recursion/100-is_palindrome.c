#include "main.h"
/**
 * _strlen_recursion - caculates the length of a string
 * @s: the inputed string.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_check - checks if a string is a pslindrome.
 * @s: inputed string
 * @start: the first character of the string
 * @end: the last character of the string
 *
 * Return: 1 id its a palindrome or 0 if its not.
 */

int palindrome_check(char *s, int start, int end)
{
	start = 0;
	end = _strlen_recursion(s) - 1;

	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (palindrome_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - calls the palindrome_check function
 * @s: string to be checked
 *
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (palindrome_check(s, 0, len));
}
