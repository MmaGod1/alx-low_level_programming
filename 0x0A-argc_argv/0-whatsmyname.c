#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: counts number of command line arguments passed but its unused.
 * @argv: array which contains the program command line arguments.
 * Return: 0 on success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
