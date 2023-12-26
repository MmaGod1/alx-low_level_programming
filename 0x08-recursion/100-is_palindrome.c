#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	if (s[0] != s[len - 1])
	{
		return (0);
	}
	return (is_palindrome(s + 1));
}

