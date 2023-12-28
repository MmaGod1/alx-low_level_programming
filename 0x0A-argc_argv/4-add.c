#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: counts number of command line arguments passed.
 * @argv: array which contains the arguments to be added.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *num;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = argv[i];
		while (*num != '\0')
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
