#include "main.h"
/**
 * print_alphabet_x10- prints lower case alphabet x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 97;
		for ( c =97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}

