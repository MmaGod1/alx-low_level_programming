#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number to be added.
 * @n2: second number to be added.
 * @r: buffer where the sum would be stored.
 * @size_r: buffer size:
 * Return: the pointer to result.
 */
/*char *infinite_add(char *n1, char *n2, char *r, int size_r)
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

	for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry != 0; i--, j--)
	{
		num1 = (i >= 0 && n1[i] >= '0' && n1[i] <= '9') ? n1[i] - '0' : 0;
		num2 = (j >= 0 && n2[j] >= '0' && n2[j] <= '9') ? n2[j] - '0' : 0;

		sum = num1 + num2 + carry;
		remainder = sum % 10;
		carry = sum / 10;

		if (k >= size_r - 1)
		{
			return (0);
		}
		else
		{
			r[k++] = remainder + '0';
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
}*/


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
	int i = 0, j = 0, k = 0;
	int sum = 0, carry = 0;

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
