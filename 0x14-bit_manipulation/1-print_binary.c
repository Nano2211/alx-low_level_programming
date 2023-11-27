#include "main.h"

/**
* _powerer - func calculates (base ^ power)
* @base: base of the exponent
* @power: power of the exponent
*
* Return: value of (base ^ power)
*/
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int x;
	unsigned int y;

	x = 1;
	for (y = 1; y <= power; y++)
		x *= base;
	return (x);
}

/**
* print_binary - prints a number in binary notation
* @n: number to print
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char fly;

	fly = 0;
	divsor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divsor != 0)
	{
		check = n & divsor;
		if (check == divsor)
		{
			fly = 1;
			_putchar('1');
		}
		else if (fly == 1 || divsor == 1)
		{
			_putchar('0');
		}
		divsor >>= 1;
	}
}
