#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long a_high = 0, b_high = 0;
	unsigned long low_sum, high_sum;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 98; count++)
	{
		low_sum = a + b;
		high_sum = a_high + b_high;

		high_sum += low_sum / 1000000000;
		low_sum = low_sum % 1000000000;

		if (high_sum)
			printf(", %lu%09lu", high_sum, low_sum);
		else
			printf(", %lu", low_sum);

		a = b;
		a_high = b_high;
		b = low_sum;
		b_high = high_sum;
	}

	printf("\n");
	return (0);
}

