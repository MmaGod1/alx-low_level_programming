#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: the number of argument passed - here just 1.
 * @argv: the argument passed.
 *
 * Return: 0 on success, 1 for error - if no argument is passed.
 */

int main(int argc, char *argv[])
{
	int i, num, coins = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (num >= cents[i])
		{
			coins += num / cents[i];
			num = num % cents[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
