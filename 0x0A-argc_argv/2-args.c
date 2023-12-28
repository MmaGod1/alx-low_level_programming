#include <stdio.h>

/**
 * main - prints out all arguments it receives.
 * @argc: counts number of command line arguments passed.
 * @argv: array which contains the program command line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
