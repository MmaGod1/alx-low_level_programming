#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * that range from 0 to 99
 *
 * Return: Always 0
 */
int main(void)
{
	int N, M, B, R;

	for (N = 0; N <= 9; N++)
	{
		for (M = 0; M <= 9; M++)
		{
			for (B = N; B <= 9; B++)
			{
				if (B == N)
				{
					R = M + 1;
				}
				else
				{
					R = 0;
				}
				for (; R <= 9; R++)
				{
					putchar(N + '0');
					putchar(M + '0');
					putchar(' ');
					putchar(B + '0');
					putchar(R + '0');
					if (N != 9 || M != 8 || B != 9 || R != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
