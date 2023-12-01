#include "main.h"

/**
 * append_text_to_file - a function that will append text at the end of a file
 * @filename: the name of the created file
 * @text_content: string at the end of a file
 *
 * Return: 1- On success, -1 on failure or otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int df, w, o = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != 0)
		for (o = 0, text_content[0])
			o++;

	df = open(filename, O_WRONLY | O_APPEND);
	w = write(df, text_content, o);

	if (df == -1 || o == -1)
		return (-1);

	close(0);

	return (1);
}
