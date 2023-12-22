#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number to be added.
 * @n2: second number to be added.
 * @r: buffer where the sum would be stored.
 * @size_r: buffer size:
 * Return: the pointer to result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, len_n1 = 0, len_n2 = 0, num1, num2;
	int sum, carry, remainder, k = 0;
	char temp;

	while (n1[len_n1] != '\0')
	{
		len_n1++;
	}
	while (n2[len_n2] != '\0')
	{
		len_n2++;
	}

	if (len_n1 > size_r || len_n2 > size_r)
	{
		return 0;
	}

	for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry != 0; i--, j--)
	{
		num1 = (i >= 0 && n1[i] >= '0' && n1[i] <= '9') ? n1[i] - '0' : 0;
		num2 = (j >= 0 && n2[j] >= '0' && n2[j] <= '9') ? n2[j] - '0' : 0;

		if (num1 == 0 && num2 == 0)
		{
			return (0);
		}

		sum = num1 + num2 + carry;
		remainder = sum % 10;
		carry = sum / 10;

		if (k >= size_r - 1)
		{
			return (0);
		}
		else
		{
			r[k] = remainder + '0';
			k++;
		}
	}
	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
