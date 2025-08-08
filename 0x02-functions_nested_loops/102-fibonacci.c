#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	long int i = 1, j = 2, seq;
	int count;

	printf("%d, %d, ", i, j);

	for (count = 2; count < 50; count++)
	{
		seq = i + j;
		printf("%d", seq);

		if (count < 49)
			printf(", ");

		i = j;
		j = seq;
	}

	printf("\n");
	return 0;
}
