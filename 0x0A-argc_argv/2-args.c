 #include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: count of all arguments
 * @argv: array of strings of all arguments
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
