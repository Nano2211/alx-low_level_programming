#include "main.h"

/**
 * print_alphabet- Prints lowercase alphabet using _putchar only
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int c;
	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	/*return:0*/
	return (0);
}
