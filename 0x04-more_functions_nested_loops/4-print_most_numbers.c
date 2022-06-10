#include "main.h"
/**
 * print_most_numbers - Prints numbers from (0 to 9) excluding 2 and 4
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		if (m != 50 &&  m != 52)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
