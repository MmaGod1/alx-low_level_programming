#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *  @b: pointervto the buffer
 *  @size: size of buffer
 *  Return: void
 */
/*void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}
		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
				{
					printf("%c", b[j]);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/


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
