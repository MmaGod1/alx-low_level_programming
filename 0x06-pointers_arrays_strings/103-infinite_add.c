#include <stdio.h>
/**
 * infinite_add - adds two infinit numbers
 * @n1: first infinite number
 * @n2: second infinite number
 * @r: buffer to hold the result of the sumed numbers
 * @size_r: size of the buffer
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, num1, num2, k = 0;
	int carry = 0, sum, remainder;

	for (i = 0, j = 0; n1[i] != '\0' || n2[j] != '\0' || carry != 0; i++, j++)
	{
		num1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
		num2 = (n2[j] != '\0') ? n2[j] - '0' : 0;

		sum = num1 + num2 + carry;
		remainder = sum % 10;
		carry = sum / 10;
		if (k >= size_r - 1)
		{
			return (NULL);
		}
		else
		{
			r[k] = remainder + '0';
			k++;
		}
	}
	r[k] = '\0';
	return (r);
}
