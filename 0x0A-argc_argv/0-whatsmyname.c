#include <stdio.h>
#include 'main.h'

/**
 * main - Prints the programs name
 * @argc: counts the arguments
 * @argv: arguments
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
