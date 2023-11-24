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
	int len1 = 0, len2 = 0, carry = 0;
	int sum, max_len, start, end, res, num1, num2;
	char temp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	max_len = (len1 > len2 ? len1 : len2) + 1;
	if (max_len > size_r)
		return (0);
	len1--;
	len2--;
	res = 0;
	while (len1 >= 0 || len2 >= 0 || carry)
	{
		num1 = (len1 >= 0 && n1[len1] >= '0' && n1[len1] <= '9') ?
			(n1[len1] - '0') : 0;
		num2 = (len2 >= 0 && n2[len2] >= '0' && n2[len2] <= '9') ?
			(n2[len2] - '0') : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		r[res] = (sum % 10) + '0';
		res++;
		len1--;
		len2--;
	}
	r[res] = '\0';
	start = 0;
	end = res - 1;
	while (start < end)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
