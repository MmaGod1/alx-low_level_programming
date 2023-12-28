#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: counts number of command line arguments passed.
 * @argv: array which contains the program command line arguments
 * but it is unused.
 * Return: 0 on  success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
