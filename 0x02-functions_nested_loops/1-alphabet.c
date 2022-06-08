#include "main.h"

/**
 * print_alphabet- Prints lowercase alphabet using _putchar only
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	/*return:0*/
	return (0);
}
