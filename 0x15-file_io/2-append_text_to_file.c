#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 *  @filename: is the name of the file and
 *  @text_content: is the NULL terminated string to
 *  add at the end of the file
 *
 *  Return: 1 on success and -1 on failure
 *	If filename is NULL return -1
 *	1 if the file exists and -1 if the file does not exist or
 *	if you do not have the required permissions
 *	to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cr_fil, wr_fil, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	cr_fil = open(filename, O_WRONLY | O_APPEND);
	wr_fil = write(cr_fil, text_content, len);

	if (cr_fil == -1 || wr_fil == -1)
	{
		return (-1);
	}

	close(cr_fil);
	return (1);
}

