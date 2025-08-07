#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * 
 * Return: void
 */
void times_table(void)
{
	int first_num, second_num, product;

	for (first_num = 0; first_num <= 9; first_num++)
	{
		for (second_num = 0; second_num <= 9; second_num++)
		{
			product = first_num * second_num;
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				/* add space to pad single character output */
				_putchar(' ');
				_putchar(product + '0');
			}

			if (second_num == 9) {
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
