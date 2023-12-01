#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that copys the content of a file to another file.
 * @argc: counts number of arguments
 * @argv: pass command line arguments to the main function
 *
 * Return: 0
 */
#define BUFFER_SIZE 1024
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];                                  ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Incomplete write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
