#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments passed to it
 *
 * @argc: holds number of arguments passed
 * @argv: array pointer that holds arguments passed
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int a = 0, b;
	while (a < argc)
	{
		b = a;
		a++;
	}
	printf("%d\n", b);
	return (0);
}

