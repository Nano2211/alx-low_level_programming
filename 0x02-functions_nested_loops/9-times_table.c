#include "main.h"
/**
 * times_table-Prints the nine times table from 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a = 0; /*factor*/
	int b; /*count*/
	int c;/*computed value*/

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
