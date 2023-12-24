#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *  @b: pointervto the buffer
 *  @size: size of buffer
 *  Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, m;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x:", i);

			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
				{
					printf(" ");
				}
				if (j < size)
				{
					printf("%02x", b[j]);
				}
				else
				{
					printf("  ");
				}
			}
			printf(" ");

			for (m = i; m < i + 10; m++)
			{
				if (m >= size)
					break;
				if (b[m] < 32 && b[m] > 126)
					printf(".");
				else
					printf("%c", b[m]);
			}
			printf("\n");
		}
	}
}
