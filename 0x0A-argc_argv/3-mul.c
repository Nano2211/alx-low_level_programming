#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 *
 * @argc: counts arguments
 * @argv: array of arguments passed
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		 x = (atoi(argv[1]) * atoi(argv[2]));
		 printf("%d\n", x);
	}
	return (0);
}
