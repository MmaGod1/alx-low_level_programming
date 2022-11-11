#include "shell.h"

/**
 * prompt - Display shell prompt
 */
void prompt(void)
{
	PRINTER("$ ");
}
/**
 * print_error - Display error based on command and how many time shell looped
 * @input: user input
 * @counter: Simple shell count loop
 * @argv: Program name
 *
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *er;

	PRINTER(argv[0]);
	PRINTER(": ");
	er = _itoa(counter);
	PRINTER(er);
	free(er);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n")
}
