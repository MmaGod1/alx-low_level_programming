#include <stdio.h>
#include <stdlib.h>

/**
 * check_input - check if the input string contains only digits
 * @str: the string.
 *
 * Return: 1 of true.
 */
int check_input(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - multiply two positive numbers.
 * @num1: first number to be multiplied
 * @num2: second number to multiply.
 * @out_len: set to the length of the result array (len1 + len2).
 *
 * Return: pointer to the product digits array (length = *out_len).
 */
int *multiply(char *num1, char *num2, int *out_len)
{
	int len1 = 0, len2 = 0, i, j, mul, sum;
	int *result;

	for (len1 = 0; num1[len1] != '\0'; len1++)
		;
	for (len2 = 0; num2[len2] != '\0'; len2++)
		;

	*out_len = len1 + len2;

	result = malloc(sizeof(int) * (*out_len));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* Initialize the result array to 0 */
	for (i = 0; i < *out_len; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + mul;
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	return (result);
}

/**
 * main - the calling function.
 * @argc: counts arguments passed.
 * @argv: the numbers passed.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int *result;
	int len, i, started = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Validate inputs */
	if (!check_input(argv[1]) || !check_input(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2], &len);

	/* Skip leading zeros and print digits */
	for (i = 0; i < len; i++)
	{
		if (result[i] != 0)
			started = 1;
		if (started)
			putchar(result[i] + '0');
	}

	/* If all zeros, print single '0' */
	if (!started)
		putchar('0');

	putchar('\n');
	free(result);
	return (0);
}
