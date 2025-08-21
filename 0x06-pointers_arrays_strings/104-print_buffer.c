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
	int i, j = 0, check = 10;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);

		check = i + 10;

		while (j < check)
		{
			if (j % 2 == 0 && j < size)
				printf(" %02x", b[j]);
			else if (j < size)
				printf("%02x", b[j]);
			else
			{
				if (j % 2 == 0)
					printf("   ");
				else
					printf("  ");
			}
			j++;
		}

		j = i;
		printf(" ");
		while (j < check && j < size)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else if (b[j] <= 32 || b[j] >= 126)
				printf(".");
			j++;
		}
		printf("\n");
	}
}
