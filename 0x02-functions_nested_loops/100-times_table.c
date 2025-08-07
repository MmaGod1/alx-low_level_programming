#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int first_num, second_num, product;

	if (n < 0 || n > 15)
		return;

	for (first_num = 0; first_num <= n; first_num++)
	{
		for (second_num = 0; second_num <= n; second_num++)
		{
			product = first_num * second_num;
			if (product > 99)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (product > 9)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (second_num == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}

			if (second_num == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
