#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *  @filename: text file to be read
 *  @letters: number of letters to be read
 *
 *  Return: the actual number of letters it could read and print
 *  if the file can not be opened or read, return 0
 *  if filename is NULL return 0
 *  if write fails or does not write the expected
 *  amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rd_txt, wr_fil, rd_fil;

	rd_txt = open(filename, O_RDONLY);

	if (!rd_txt)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd_fil = read(rd_txt, buf, letters);
	wr_fil = write(STDOUT_FILENO, buf, rd_fil);

	free(buf);
	close(rd_txt);
	return (wr_fil);
}
