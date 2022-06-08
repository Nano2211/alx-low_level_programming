#include "main.h"
/**
 * _islower- Checks if char is lowercase
 * return 1 if true and 0 if false
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if ( c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
