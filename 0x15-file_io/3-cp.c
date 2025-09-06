#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * error_exit - prints an error message, closes file descriptors, and exits
 * @code: the exit code
 * @msg: the error message format string
 * @name: filename or NULL
 * @fd: file descriptor to close (-1 if none)
 */
void error_exit(int code, const char *msg, const char *name, int fd)
{
	if (fd >= 0)
		close(fd);
	if (name)
		dprintf(STDERR_FILENO, msg, name);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, or exits with relevant code on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buf[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", NULL, -1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			error_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);
	}

	if (r == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], fd_from);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd_to);

	return (0);
}
