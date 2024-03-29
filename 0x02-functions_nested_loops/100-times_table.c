#include "main.h"
/**
 * print_times_table- Prints times table of numbers that are between 0 and 15
 *
 * @n: int type
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n ; column++)
			{
				product = row * column;
				if (column == 0)
				{
					_putchar('0');
				}
				else if (product < 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar ((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
