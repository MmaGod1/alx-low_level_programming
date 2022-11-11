#include "shell.h"

/**
 * _prerror - Print custom Error
 * @argv: Program name
 * @c: Error count
 * @cmd: Command
 *
 * Return: Void
 */
void _perror(char **argv, int c, char **cmd)
{
	char *er = _itoa(c);

	PRINTER(argv[0]);
	PRINT(": ");
	PRINTER(er);
	PRINTER(": ");
	PRINTER(cmd[0]);
	PRINTER(": Illegal number: ");
	PRINTER(cmd[1]);
	PRINTER("\n");
	free(er);
}
