#include "main.h"

/**
 * more_numbers - Prints (0 to 14) 10 times
 *
 * Return: no return
 */
void more_numbers(void)
{
	int n, count;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
