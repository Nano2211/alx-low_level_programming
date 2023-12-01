#include "main.h"

/**
 * create_file- function that creates and writes a file.
 *@filename: nameof created file
 *@text_content: NULL string used to create the file
 *
 *Return: 1- on success, -1 on failure or if filename is NULL or Otherwise
 */
int create_file(cons char *filename, char *text_content)
{
	int fil, w, lenx = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (lenx = 0, text_content[lenx])
			lenx++;
	}
	fil = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	w = write(fil, text_content, lenx);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}

