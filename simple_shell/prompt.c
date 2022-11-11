#include "shell.h"

/**
 * promp - checks mode & prints prompt if in interactive mode
 * @fd: File stream
 * @buf: Buffer
 */
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (s_ISCHR(buf.st_mode))
		_puts(PROMPT);
}
/**
 * _puts - Prints a string without a \n
 * @str: String to print
 *
 * Return: void
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STOUT_FILENO, str, length);
}
