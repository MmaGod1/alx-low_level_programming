#include <stdio.h>

/**
 * main - sums nultplies of 3 or 5
 *
 * Description: multiples between 0 and 1024
 * Return: Always(0) Success
 */

int main(void)
{
	int i, total = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
	}

	printf("%d\n", total);

	return (0);
}
