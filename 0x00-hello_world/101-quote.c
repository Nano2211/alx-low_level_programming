#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: print a quote using write function
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 *  Return: This time we return an error 1.
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Kopra, 2015-10-19\n";

	write(1, quo, 59);
	return(1);
