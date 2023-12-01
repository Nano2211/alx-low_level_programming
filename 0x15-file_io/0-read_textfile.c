#include "main.h"
#include <stdlib.h>

/**
 * ssize_t read_textfile - a function that reads a text file and prints it to stdout
 *@filename: the textfile being read
 *@letters: the number of letters to be read
 *
 * Return: w- actual number of bytes read and printed, 0 when funtion fails or fulename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *doe;
	ssize_t dd;
	ssize_t w;
	ssize_t t;

	dd = open(filename, O_RDONLY);
	if (dd == -1)
	{
		return (0);
	}
	doe = malloc(sizeof(char) * letters);
	t = read(dd, doe, letters);
	w = write(STDOUT_FILENO, doe, t);

	free(doe);
	close(dd);
	return (w);
}
