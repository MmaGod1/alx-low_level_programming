#include "main.h"
/**
 * create_file - creates a file
 * @filename:the name of the file to create and
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure, if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr_fil, i;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		len = 0;
	}
	else
	{
		for (i = 0; text_content[i]; i++)
			;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	wr_fil = write(fd, text_content, i);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		wr_fil = write(fd, text_content, len);

	if (wr_fil == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
