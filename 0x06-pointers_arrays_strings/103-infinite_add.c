#include "main.h"
/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to result, or 0 if it cannot fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum = 0, carry = 0;

	while (n1[i])
		i++;
	i--;

	while (n2[j])
		j++;
	j--;

	/* Add digits from right to left */
	while (i >= 0 || j >= 0 || carry)
	{
		if (k >= size_r - 1)
			return (0);

		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		k++;
		i--;
		j--;
	}

	r[k] = '\0';

	/* Reverse the string in-place */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
