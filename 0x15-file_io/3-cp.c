#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * copy_file - Copies the content of one file to another.
 * @file_from: the name of the source file
 * @file_to: the name of the destination file
 * @BUFFER_SIZE: gives size of the array
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 999
 * If file_to or file_from cannot be closed - exit code 100.
 * Return: 0.
 */

int copy_file(const char *file_from, const char *file_to, const int BUFFER_SIZE)
{
	int fd_to, fd_from;
	const int BUFFER_SIZE = 1024;
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP |
			S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	bytes_read = read(fd_from, buffer, BUFFER_SIZE);

	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd_to)
				|| close(fd_from));
		exit(100);
	}
	return (0);
}

/**
 * main - function that copys the content of a file to another file.
 * @argc: counts number of arguments
 * @argv: pass command line arguments to the main function
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const int BUFFER_SIZE = 1024;
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to, BUFFER_SIZE);

	return (0);
}
