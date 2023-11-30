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
	int cr_fil, wr_fil, len;

	if (!filename)
		return (-1);

	cr_fil = open(filename, O_RDWR | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR);

	if (text_content == NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		wr_fil = write(cr_fil, text_content, len);

		if (wr_fil == -1 || wr_fil != len)
		{
			close(cr_fil);
			return (-1);
		}
	}
	close(cr_fil);
	return (1);
}
