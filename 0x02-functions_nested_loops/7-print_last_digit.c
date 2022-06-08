#include "main.h"
/**
 * print_last_digit- Prints last digit of a number
 * 
 * @n: int type
 *
 * Return: Always 0
 */
int print_last_digit( int n)
{
	int digit ;

	if (n < 0)
	{
		digit = (-1 * (n % 10));
		_putchar(n + '0');
		return (digit);
	}
	else
	{
		digit = (n % 10);
		_putchar(n + '0');
		return (digit);
	}
}
