#include "main.h"
/**
 * _isalpha- Prints whether something is an alphabet regardless of whether
 * its lower or upper cae
 * if true it will return 1 and if false it will return 0
 *
 * @c: The char that will be checked in ASCII code
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
