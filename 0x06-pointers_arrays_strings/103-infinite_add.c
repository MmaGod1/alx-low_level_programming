#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum, remainder;
	int k = 0, num1, num2;
	int i = 0, j = 0;

	while (n1[i] != '\0' || n2[j] != '\0' || carry != 0)
	{
		if ((n1[i] >= '0' && n1[i] <= '9') && (n2[j] >= '0' && n2[j] <= '9'))
		{
			num1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
			num2 = (n2[j] != '\0') ? n2[j] - '0' : 0;
		}
		else
		{
			return (NULL);
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
	if (n1[i] != '\0')
		i++;
	if (n2[j] != '\0')
		j++;
	r[k] = '\0';
	return (r);
}
